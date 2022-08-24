class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<pair<int, int>> dir(4);
        dir[0] = {0, 1};
        dir[1] = {1, 0};
        dir[2] = {0, -1};
        dir[3] = {-1, 0};
        int m = arr.size(), n = arr[0].size(), size = m * n;
        vector<int> res(size);
        int index = 0, r = 0, c = 0, curdir = 0;
        while (index < (size)) {
            res[index] = arr[r][c];
            arr[r][c] = 0;
            int nr = r + dir[curdir].first;
            int nc = c + dir[curdir].second;
            if (nr < 0 || nr >= m || nc < 0 || nc >= n || arr[nr][nc] == 0)
                curdir = (curdir + 1) % 4;
            r = r + dir[curdir].first;
            c = c + dir[curdir].second;
            index++;
        }
        return res;
    }
};