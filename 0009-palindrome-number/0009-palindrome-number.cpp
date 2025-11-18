class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        vector<int> nums;

        while (x > 0) {
            nums.push_back(x % 10);
            x = x / 10;
        }

        int start = 0, end = nums.size() - 1;

        while (start < end) {
            if (nums[start] != nums[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
};