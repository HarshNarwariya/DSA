class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_sum = INT_MIN, curr = 0;
        for (int i = 0; i < n; i++) {
            curr += nums[i];
            max_sum = max(max_sum, curr);
            if (curr < 0) curr = 0;
        }
        return max_sum;
    }
};
