class Solution {
public:
    map<int, int> dp;
    int rec(int ind, vector<int>& nums){
        if(ind >= nums.size()) return 0;
        if(dp.find(ind) != dp.end()) return dp[ind];
        else return dp[ind] = max(nums[ind] + rec(ind+2, nums), rec(ind+1, nums));
    }
    int rob(vector<int>& nums) {
        return rec(0, nums);
    }
};