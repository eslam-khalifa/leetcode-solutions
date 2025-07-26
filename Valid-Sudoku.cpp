class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& sud) {
        unordered_set<int> s;

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(s.find(sud[i][j]) != s.end() && sud[i][j] != '.') return false;
                if(sud[i][j] != '.') s.insert(sud[i][j]);
            }
            s.clear();
        }

        for(int j = 0; j < 9; j++) {
            for(int i = 0; i < 9; i++) {
                if(s.find(sud[i][j]) != s.end() && sud[i][j] != '.') return false;
                if(sud[i][j] != '.') s.insert(sud[i][j]);
            }
            s.clear();
        }

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                for(int k = 0; k < 3; k++) {
                    for(int l = 0; l < 3; l++) {
                        if(s.find(sud[k + (3 * i)][l + (3 * j)]) != s.end() && sud[k + (3 * i)][l + (3 * j)] != '.') return false;
                        if(sud[k + (3 * i)][l + (3 * j)] != '.') s.insert(sud[k + (3 * i)][l + (3 * j)]);
                    }
                }
                s.clear();
            }
        }

        return true;
    }
};
