// Optimal Merge pattern
// get two small sized and merge them and calculate time taken to merge them.

#include <bits/stdc++.h>
using namespace std;

int optimal_merge(vector<int> &arr) {
    priority_queue<int, vector<int>, greater<int> > min_heap;
    for (auto &i: arr) min_heap.push(i);
    int merge_count = 0;
    // make sure to have two elements or more
    while (min_heap.size() > 1) {
        int a = min_heap.top(); min_heap.pop();
        int b = min_heap.top(); min_heap.pop();
        int c = a + b;

        merge_count += c;

        min_heap.push(c);
    }
    return merge_count;
}

int main() {    
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i: arr) {
        cin >> i;
    }
    cout << optimal_merge(arr);
    return 0;
}