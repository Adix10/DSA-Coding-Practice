public class Solution {
    public int minJumps(int[] arr) {
        int n = arr.Length;
        if (n <= 1)
            return 0;
        if (arr[0] == 0)
            return -1;
        int jumps = 0;
        int end = 0;
        int farthest = 0;
        for (int i = 0; i < n - 1; i++) {
            farthest = Math.Max(farthest, i + arr[i]);
            if (i == end) {
                jumps++;
                end = farthest;
                if (end >= n - 1)
                    return jumps;
                if (end == i)
                    return -1;
            }
        }
        return -1;
    }
}