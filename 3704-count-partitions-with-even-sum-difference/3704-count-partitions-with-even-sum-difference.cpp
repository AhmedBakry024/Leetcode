class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0, rSum = 0, lSum = 0;
        for (int i : nums) {
            rSum += i;
        }
        for (int i = 0; i < nums.size() - 1; i++) {
            lSum += nums[i];
            rSum -= nums[i];
            if ((lSum - rSum) % 2 == 0)
                sum++;
        }

        return sum;
    }
};