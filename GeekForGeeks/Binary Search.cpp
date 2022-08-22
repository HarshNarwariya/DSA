// Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (arr[mid] == k) {
                return mid;
            } else if (k < arr[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return -1;
    }
};