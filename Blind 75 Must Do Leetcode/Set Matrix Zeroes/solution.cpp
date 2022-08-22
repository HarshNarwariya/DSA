class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
//         O(n^2) Time O(n^2) Space
        unordered_set<int> rows;
        unordered_set<int> cols;
        int m = matrix.size(), n = matrix[0].size();
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n;c++) {
                if (matrix[r][c] == 0) {
                    rows.insert(r);
                    cols.insert(c);
                }
            }
        }
        
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n;c++) {
                if (rows.find(r) != rows.end() || cols.find(c) != cols.end())
                    matrix[r][c] = 0;
            }
        }
    }
};