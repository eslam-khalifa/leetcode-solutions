class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int pre = 1, suf = 1;
        vector<int> res(n, 1);

        for (int i = 1; i < n; i++) {
            pre *= nums[i - 1];
            res[i] *= pre;
        }

        for (int i = n - 2; i >= 0; i--) {
            suf *= nums[i + 1];
            res[i] *= suf;
        }

        return res;
    }
};
