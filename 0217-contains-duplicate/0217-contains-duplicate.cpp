class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> occur;
        for (int i = 0; i < nums.size(); i++) {
            if (occur[nums[i]])
                return true;
            occur[nums[i]] = true;
        }
        return false;
    }
};