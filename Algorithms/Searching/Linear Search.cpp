#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
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
	cout << linearSearch(arr, n, target);
	return 0;
}
