class Solution {
public:
    map<pair<int, int>, int> dp;
    int rec(int ind, int sum, vector<int>& nums, int& target){
        if(target == sum && ind == nums.size()){
            dp[{ind, sum}] = 1;
            return dp[{ind, sum}];
        }
        else if(ind == nums.size()){
            dp[{ind, sum}] = 0;
            return dp[{ind, sum}];
        }
        if(dp.find({ind, sum}) != dp.end()){
            return dp[{ind, sum}];
        }
        dp[{ind, sum}] = rec(ind + 1, sum + nums[ind], nums, target)
                + rec(ind + 1, sum - nums[ind], nums, target);
        return dp[{ind, sum}];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return rec(0, 0, nums, target);
    }
};