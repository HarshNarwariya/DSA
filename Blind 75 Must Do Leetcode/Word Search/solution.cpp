class Solution {
public:    
    bool ex(vector<vector<char>>& board, string word, int r, int c, int i = 0) {
        if (i == word.size()) return true;
        if (
            r < 0 ||
            r >= board.size() ||
            c < 0 ||
            c >= board[0].size() ||
            board[r][c] != word[i]
        ) {
            return false;
        }
        
        board[r][c] = '$';
        bool result = ex(board, word, r - 1, c, i + 1) ||
            ex(board, word, r, c + 1, i + 1) ||
            ex(board, word, r + 1, c, i + 1) || 
            ex(board, word, r, c - 1, i + 1);
        board[r][c] = word[i];
        return result;
            
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        for (int r = 0; r < board.size(); r++) {
            for (int c = 0; c < board[0].size(); c++) {
                if (ex(board, word, r, c, 0) == true) {
                    return true;
                }
            }
        }        
        return false;
    }
};
