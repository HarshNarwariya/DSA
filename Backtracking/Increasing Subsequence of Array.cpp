// Given an array print all the increasing subsequence.
// each subsequence should be greater then or equal to size given.
// should not contain duplicate subsequence.

#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> &arr, vector<int> &comb, 
         vector<vector<int>> &result, int k,
         int size, int parent = -1) {
    if (comb.size() >= size) result.push_back(comb);
    unordered_set<int> used_items;
    for (int i = k; i < arr.size(); i++) {
        if (used_items.find(arr[i]) == used_items.end() &&
           (parent == -1 || arr[i] >= arr[parent])) {
            comb.push_back(arr[i]);
            dfs(arr, comb, result, i + 1, size, i);
            comb.pop_back();
        }
        used_items.insert(arr[i]);
    }
}

int main () {
    int n, size;
    cin >> n >> size;
    vector<int> arr(n);
    for (auto &i: arr) {
        cin >> i;
    }

    vector<vector<int>> result;
    vector<int> comb;

    dfs(arr, comb, result, 0, size);

    for (auto item: result) {
        for (auto ele: item) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}