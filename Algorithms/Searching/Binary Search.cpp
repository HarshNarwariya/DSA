#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int l, int r, int target) {
    int mid;
    while (l < r) {
        mid = l + (r - l)/2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1;
}

int main() {
    //  Linear Search
	vector<int> arr;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
	    int temp;
	    cin >> temp;
	    arr.push_back(temp);
	}
	
	int target;
	cin >> target;
// 	 binarySearch search require sorted array
	sort(arr.begin(), arr.end());
	cout << binarySearch(arr, 0, n, target);
	return 0;
}
