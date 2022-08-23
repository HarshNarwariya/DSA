class Solution {
public:
    void insertPosition(vector<int> &subsq, int right, int target) {
        int l = 0, r = right - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (subsq[mid] == target) return;
            else if (subsq[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        subsq[l] = target;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int length = 1;
        for (int i = 1; i < n; i++) {
            if (nums[length - 1] < nums[i]) {
                nums[length++] = nums[i];   
            }
            else
                insertPosition(nums, length, nums[i]);
        }
        return length;
    }
};