class Solution {
public:
    vector<vector<int>> generate(int n) {
        if (n == 0)
            return {};
        if (n == 1)
            return {{1}};
        vector<int> prev;
        vector<vector<int>> ans;
        for (int i = 1; i <= n; i++) {
            vector<int> cur(i);
            for (int j = 0; j < i; j++) {
                if (j == 0 || j == i - 1) {
                    cur[j] = 1;
                    continue;
                }
                cur[j] = prev[j - 1] + prev[j];
            }
            ans.push_back(cur);
            prev = cur;
        }
        return ans;
    }
};