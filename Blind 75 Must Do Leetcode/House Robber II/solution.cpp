class Solution {
public:
    int baseRob(vector<int> &nums, int start, int end) {
        int p = 0, temp;
        int mx = 0;
        for (int i = end - 1; i >= start; i--) {
            temp = mx;
            mx = max(mx, nums[i] + p);
            p = temp;
        }
        return mx;
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        // what if there is only one element
        if (n == 1) return nums[0];
        return max(baseRob(nums, 0, n - 1), baseRob(nums, 1, n));
    }
};