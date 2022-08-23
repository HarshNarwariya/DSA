class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n, 1);
        for (int i = n - 2; i >= 0; i--) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] < nums[j]) {
                    count[i] = max(count[i], 1 + count[j]);
                }
            }
        }
        int m = 1;
        for (auto &i: count)
            m = (m < i) ? i: m;
        return m;    
    }
};