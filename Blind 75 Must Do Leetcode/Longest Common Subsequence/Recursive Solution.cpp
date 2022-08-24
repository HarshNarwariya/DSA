class Solution {
public:
    int lcs(string &t1, string &t2, int m, int n, vector<vector<int>> &cache) {
        if (m == 0 || n == 0) return 0;
        if (cache[m - 1][n - 1] != -1) return cache[m - 1][n - 1];
        if (t1[m - 1] == t2[n - 1]) {
            cache[m - 1][n - 1] = 1 + lcs(t1, t2, m - 1, n - 1, cache);
            return cache[m - 1][n - 1];
        } else {
            return cache[m - 1][n - 1] = max(
                lcs(t1, t2, m - 1, n, cache),
                lcs(t1, t2, m, n - 1, cache)
            );
        }
        return cache[m - 1][n - 1];
    }
    int longestCommonSubsequence(string t1, string t2) {
//         recursive solution
        int m = t1.length(), n = t2.length();
        vector<vector<int>> cache(m, vector<int> (n, -1));
        return lcs(t1, t2, m, n, cache);
    }
};