// It should be graunted to have the majority element
// Majority element is considered when it appears n/2 times or more.

#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(vector<int>& arr) {
    int size = arr.size();
    int majorityElement, count = 0;
    for (auto ele: arr) {
        if (count == 0) majorityElement = ele;
        count += (majorityElement == ele) ? 1: -1;
    }
    return majorityElement;
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