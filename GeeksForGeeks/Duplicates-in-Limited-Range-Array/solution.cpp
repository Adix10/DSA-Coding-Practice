class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        int count[n + 1] = {};
        for (int x : arr)
            count[x]++;
        for (int i = 1; i <= n; i++)
            if (count[i] == 2)
                ans.push_back(i);
        return ans;
    }
};