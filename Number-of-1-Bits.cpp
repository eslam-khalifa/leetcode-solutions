class Solution {
public:
    int hammingWeight(int n) {
        int counter = 0;
        auto binary = bitset<32>(n);
        for(int i = 0; i < 32; i++) if(binary[i]) counter++;
        return counter;
    }
};