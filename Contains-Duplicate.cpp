class Solution {
public:
    # include <unordered_set>
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> hash_map;
        for(int i = 0; i < nums.size(); i++){
            if(hash_map.find(nums[i]) == hash_map.end()) hash_map.insert(nums[i]);
            else return true;
        }
        return false;
    }
};