class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        unordered_set<char> us;
        int ans = 0;
        int max_ans = 0;
        while(left <= right && right < s.size()){
            while(us.find(s[right]) != us.end()) {
                us.erase(s[left]);
                left++;
                ans--;
                max_ans = max(max_ans, ans);
            }
            us.insert(s[right]);
            right++;
            ans++;
            max_ans = max(max_ans, ans);
            cout << max_ans << endl;
        }
        return max_ans;
    }
};