class Solution {
public:
    int removeElement(vector<int>& vec, int val) {
        vec.erase(remove(vec.begin(), vec.end(), val), vec.end());
        return vec.size();
    }
};