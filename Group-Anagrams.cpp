class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> result;

        for (auto& it : strs) {
            vector<int> v_on_off(26);
            for (auto ch : it) {
                v_on_off[ch - 'a']++;
            }

            string s;
            for (auto count : v_on_off) {
                s += to_string(count) + '#';
            }

            result[s].push_back(it);
        }

        vector<vector<string>> solution;
        for (auto& it : result) {
            solution.push_back(it.second);
        }

        return solution;
    }
};