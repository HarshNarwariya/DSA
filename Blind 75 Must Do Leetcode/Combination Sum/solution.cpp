class Solution {
public:
    vector<vector<int>> result;
    
    void calcSum(vector<int>& candidates, vector<int> &comb, int k, int t) {
        if (t == 0) {
            result.push_back(comb);
        } if (t < 0) {
            return;
        }
        for (int i = k; i < candidates.size(); i++) {
            comb.push_back(candidates[i]);
            calcSum(candidates, comb, i, t - candidates[i]);
            comb.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> comb;
        calcSum(candidates, comb, 0, target);
        return result;
    }
};
