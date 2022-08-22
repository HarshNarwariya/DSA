// Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
// Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<ll, int> freq;
        for (auto ele: A) {
            freq[ele]++;
        }
        for (auto ele: B) {
            if (freq[ele]) {
                freq[ele]--;   
            } else {
                return false;
            }
        }
        
        for(auto ele: B) {
            if (freq[ele] != 0) return false;
        }
        
        return true;
    }
};