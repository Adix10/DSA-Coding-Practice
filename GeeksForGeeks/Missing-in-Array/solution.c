int missingNum(int* arr, int n) {
    int result = 0;
    for (int i = 1; i <= n + 1; i++) {
        result ^= i;
    }
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }
    return result;
}