class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> lastRow(n, 1);
        vector<int> last2ndRow(n, 1);
        
        for (int i = 0; i < m - 1; i++) {
            for (int j = n - 2; j >= 0; j--) {
                last2ndRow[j] = lastRow[j] + last2ndRow[j + 1];
            }
            lastRow = last2ndRow;
        }
        return lastRow[0];
    }
};