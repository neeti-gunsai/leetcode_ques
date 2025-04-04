class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
    
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char num = board[i][j];
                if (num == '.') continue;
                
                string rowCheck = "row" + to_string(i) + num;
                string colCheck = "col" + to_string(j) + num;
                string boxCheck = "box" + to_string(i / 3) + to_string(j / 3) + num;
    
                if (seen.count(rowCheck) || seen.count(colCheck) || seen.count(boxCheck))
                    return false;
    
                seen.insert(rowCheck);
                seen.insert(colCheck);
                seen.insert(boxCheck);
            }
        }
        return true;
        
    }
};
