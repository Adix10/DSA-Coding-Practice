class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<long long, int> mp;
        long long sum = 0;
        int maxLen = 0;
        mp[0] = -1;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (mp.find(sum - k) != mp.end()) {
                maxLen = max(maxLen, i - mp[sum - k]);
            }
            if (mp.find(sum) == mp.end()) {
                mp[sum] = i;
            }
        }
        return maxLen;
    }
};