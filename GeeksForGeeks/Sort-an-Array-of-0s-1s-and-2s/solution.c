void sort012(int arr[], int n) {
    int l = 0, m = 0, h = n - 1;
    while (m <= h) {
        if (arr[m] == 0) {
            int t = arr[l];
            arr[l] = arr[m];
            arr[m] = t;
            l++;
            m++;
        }
        else if (arr[m] == 1) {
            m++;
        }
        else {
            int t = arr[m];
            arr[m] = arr[h];
            arr[h] = t;
            h--;
        }
    }
}