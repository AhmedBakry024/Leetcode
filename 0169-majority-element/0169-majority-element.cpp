class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m1;
        for (int i = 0; i < nums.size(); i++) {
            m1[nums[i]]++;
            if (m1[nums[i]] > nums.size() / 2)
                return nums[i];
        }
        return 0;
    }
};