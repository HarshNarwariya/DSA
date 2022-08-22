#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int start, int end) {
    for (int i = start + 1; i < end; i++) {
        int j = i - 1;
        int temp = arr[i];
        while (j>=start && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    insertionSort(arr, 0, n);
    for (auto i: arr) {
        cout << i << " ";
    }
    return 0;
}
