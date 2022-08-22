class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr, vector<int>& interval) {
        vector<vector<int>> result;
        int i = 0, n = arr.size();
        bool found_pos = false;
        while (i < n) {
            if (interval[1] < arr[i][0]) {
                result.push_back(interval);
                found_pos = true;
                break;
            } else if (interval[0] > arr[i][1]) {
                result.push_back(arr[i]);
            } else {
                interval[0] = min(interval[0], arr[i][0]);
                interval[1] = max(interval[1], arr[i][1]);
            }
            
            i++;
        }
        
        if (found_pos) {
            // i++;
            while (i < n) {
                result.push_back(arr[i]);
                i++;
            }
        } else {
            result.push_back(interval);
        }
        return result;
    }
};