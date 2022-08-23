class Solution {
public:    
    int rob(vector<int>& nums) {
        int p = 0, temp;
        int mx = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            temp = mx;
            mx = max(mx, nums[i] + p);
            p = temp;
        }
        return mx;
    }
};