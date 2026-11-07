class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_set<int> seen;
        for (int i = 0; i < arr.size(); i++) {
            int complement = target - arr[i];
            if (seen.find(complement) != seen.end()) {
                return true;
            }
            seen.insert(arr[i]);
        }
        return false;
    }
};