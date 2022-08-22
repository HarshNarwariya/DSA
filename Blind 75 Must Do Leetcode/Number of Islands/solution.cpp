class Solution {
public:
    void traverse(vector<vector<char>>& grid, int r, int c) {
        if (r < 0 || r >= grid.size() ||
           c < 0 || c >= grid[0].size() ||
           grid[r][c] == '0') return;
        grid[r][c] = '0';
        traverse(grid, r - 1, c);
        traverse(grid, r, c + 1);
        traverse(grid, r, c - 1);
        traverse(grid, r + 1, c);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for (int r = 0; r < grid.size(); r++) {
            for (int c = 0; c < grid[0].size(); c++) {
                if (grid[r][c] == '1') {
                    count += 1;
                    traverse(grid, r, c);
                }
            }
        }
        return count;
    }
};
