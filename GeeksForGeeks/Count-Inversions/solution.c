int merge(int arr[], int temp[], int l, int m, int r) {
    int i = l, j = m + 1, k = l, count = 0;
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else {
            temp[k++] = arr[j++];
            count += m - i + 1;
        }
    }
    while (i <= m)
        temp[k++] = arr[i++];
    while (j <= r)
        temp[k++] = arr[j++];
    for (i = l; i <= r; i++)
        arr[i] = temp[i];
    return count;
}

int mergeSort(int arr[], int temp[], int l, int r) {
    if (l >= r)
        return 0;
    int m = (l + r) / 2;
    return mergeSort(arr, temp, l, m)
         + mergeSort(arr, temp, m + 1, r)
         + merge(arr, temp, l, m, r);
}
int inversionCount(int arr[], int n) {
    int temp[100000];
    return mergeSort(arr, temp, 0, n - 1);
}