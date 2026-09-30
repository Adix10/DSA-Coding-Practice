int maxSubarraySum(int arr[], int n) {

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++) {

        if (currentSum + arr[i] > arr[i]) {
            currentSum = currentSum + arr[i];
        } else {
            currentSum = arr[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}