void selectionSort(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) {
        int min = i, j = i + 1;
        while (j < n) {
            if (arr[j] < arr[min]) {
                min = j;
            }
            j++;
        }
        swap(arr[i], arr[min]);
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
    selectionSort(arr, n);
    for (auto i: arr) {
        cout << i << " ";
    }
    return 0;
}
