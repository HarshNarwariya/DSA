void merge(vector<int> &arr, int l, int m, int r) {
    int s1 = m - l + 1;
    int s2 = r - m;
    vector<int> leftArr(s1), rightArr(s2);
    
    for (int i = 0; i < s1; i++) leftArr[i] = (arr[l + i]);
    for (int i = 0; i < s2; i++) rightArr[i] = (arr[m + i + 1]);
    
    int i = 0, j = 0, k = l;
    
    while (i < s1 && j < s2) {
        if (leftArr[i] <= rightArr[j]) arr[k] = leftArr[i++];
        else arr[k] = rightArr[j++];
        k++;
    }
    while (i < s1) arr[k++] = leftArr[i++];
    while (j < s2) arr[k++] = rightArr[j++];
}

void mergeSort(vector<int> &arr, int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
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
    
    mergeSort(arr, 0, n - 1);
    
    for (auto i: arr) {
        cout << i << " ";
    }
}
