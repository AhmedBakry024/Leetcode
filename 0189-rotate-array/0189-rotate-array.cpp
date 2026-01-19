class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        vector<int> aux;
        for (int i = nums.size() - k; i < nums.size(); i++) {
            aux.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size() - k; i++) {
            aux.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = aux[i];
        }
    }
};