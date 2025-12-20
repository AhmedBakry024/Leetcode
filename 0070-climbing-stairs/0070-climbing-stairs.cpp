class Solution {
public:
    vector<int> ans = vector<int>(46, -1);
    int climbStairs(int n) {
        if(n<=1) return 1;
        if(ans[n]> -1) return ans[n];
        ans[n] = climbStairs(n-1) +  climbStairs(n-2);
        return ans[n];
    }
};