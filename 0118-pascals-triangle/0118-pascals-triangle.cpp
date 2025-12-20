class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans = {{1}};
        if(n == 1) return ans;
        ans.push_back({1,1});
        vector<int> prev = ans[1];
        for(int i = 2; i< n;i++){
            vector<int> cur(i+1,1);
            for(int j=1;j<cur.size()-1;j++){
                cur[j] = prev[j] + prev[j-1];
            }
            prev = cur;
            ans.push_back(cur);
        }
        
        return ans;
    }
};