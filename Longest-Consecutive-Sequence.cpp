class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset (nums.begin(), nums.end());
        for (auto it : nums) {
            uset.insert(it);
        }

        int counter = 0;
        int count = 0;
        int maxi = 0;

        for (auto it : uset) {
            if (uset.find(it - 1) == uset.end()) {
                count = 1;
                int target = it;
                while (true) {
                    target++;
                    if (uset.find(target) == uset.end()) break;
                    count++;
                }
                maxi = max(maxi, count);
                count = 0;
                counter++;
            } else {
                continue;
            }
        }

        return maxi;
    }
};
