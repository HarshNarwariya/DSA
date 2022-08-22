// It should be graunted to have the majority element
// Majority element is considered when it appears n/2 times or more.

// It can be clearly observed to have majority element at n/2 position when array is sorted
// example
// {5, 5, 5, 5, 2, 3, 4, 1}
// when sorted
//  0  1  2  3  4  5  6  7
// {1, 2, 3, 4, 5, 5, 5, 5}
// since size = 8, then element at size/2 i.e 8/2 = 4 is answer i.e 5

#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(vector<int>& arr) {
    // sorting the original array
    sort(arr.begin(), arr.end());
    return arr[arr.size()/2];
}



int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Make sure that the array entered have a majority element!" << endl;
    for (auto &ele: arr) {
        cin >> ele;
    }
    cout << findMajorityElement(arr) << " is the majority element.";
    return 0;
}