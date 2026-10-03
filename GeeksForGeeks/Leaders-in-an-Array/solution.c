int* leaders(int arr[], int n, int *resSize) {
    int *res = malloc(n * sizeof(int));
    int max = arr[n - 1];
    int k = 0;
    res[k++] = max;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max) {
            max = arr[i];
            res[k++] = arr[i];
        }
    }
    for (int i = 0; i < k / 2; i++) {
        int t = res[i];
        res[i] = res[k - i - 1];
        res[k - i - 1] = t;
    }
    *resSize = k;
    return res;
}