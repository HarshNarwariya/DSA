class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        for (auto i : nums) {
            freq[i]++;
        }
        
        for (auto &obj : freq) {
            if (obj.second > 1) {
                return true;
            }
        }
            
        return false;
    }
};
