class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int mn1 = INT_MAX;
        int mx1 = INT_MIN;
        int mx2 = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= mx1) {
                mx2 = mx1;
                mx1 = nums[i];
            } else if (nums[i] >= mx2)
                mx2 = nums[i];
            if (nums[i] < mn1) 
                mn1 = nums[i];
        }

        return mx1 + mx2 - mn1;
    }
};