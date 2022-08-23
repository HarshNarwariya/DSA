class Solution {
public:
    void insertPosition(vector<int> &subsq, int target) {
        int l = 0, r = subsq.size() - 1;
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
        vector<int> subsq;
        subsq.push_back(nums[0]);
        for (int i = 1; i < n; i++) {
            if (subsq[length - 1] < nums[i]) {
                subsq.push_back(nums[i]); length++;   
            }
            else
                insertPosition(subsq, nums[i]);
        }
        return length;
    }
};