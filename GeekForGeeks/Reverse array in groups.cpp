// Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int len = 0;
        while (len < n) {
            int i = len, j = (i + k - 1);
            j = j >= n ? n - 1: j;
            while (i < j) {
                swap(arr[i++], arr[j--]);
            }
            len = len + k;
        }
    }
};