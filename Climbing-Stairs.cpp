class Solution {
public:
    map<int, int> dp;
    int rec(int n){
        if(n == 0) return 1;
        else if(n < 0) return 0;
        else{
            if(dp.find(n) != dp.end()) return dp[n];
            else return dp[n] = rec(n-1) + rec(n-2);
        }
    }
    int climbStairs(int n) {
        return rec(n);
    }
};