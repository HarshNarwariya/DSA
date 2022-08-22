// Binary search to find the insert postion in sorted array


#include <bits/stdc++.h>
using namespace std;

// lower_bound(arr.begin(), arr.end(), t);
// c++ built-in
int insertPostion(vector<int> &arr, int t) {
    int lb = 0, ub = arr.size() - 1, mid;
    while (lb <= ub) {
        mid = lb + (ub - lb) / 2;
        if (t == arr[mid]) 
            return mid;
        else if (t > arr[mid])
            lb = mid + 1;
        else
            ub = mid - 1;
    }
    return lb;
}

int main () {
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);

    for (auto &i: arr) {
        cin >> i;
    }

    cout << insertPostion(arr, t);
    return 0;
}