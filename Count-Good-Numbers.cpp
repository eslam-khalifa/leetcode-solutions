class Solution {
public:

    #define modulo 1000000007

    long long binexp(long long x, long long n) { // time -> O(log n)
    int ans = 1 % modulo;
    while (n > 0) {
        if (n & 1) {
        ans = (1LL * ans * x) % modulo;
        }
        x = (1LL * x * x) % modulo;
        n >>= 1;
    }
    return ans;
}
    int countGoodNumbers(long long n) {
        return (binexp(5, ceil(double(n)/2)) % modulo * binexp(4, floor(double(n)/2)) % modulo) % modulo;

    }
};