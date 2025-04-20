class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string sol = "";
        for(int i = 0; i < min(word1.length(), word2.length()); i++){
            sol += string(1, word1[i]) + word2[i];
        }
        if(word1.length() > word2.length()) sol += word1.substr(word2.length(), word1.length() - word2.length());
        else if(word1.length() < word2.length()) sol += word2.substr(word1.length(), word2.length() - word1.length());
        return sol;
    }
};