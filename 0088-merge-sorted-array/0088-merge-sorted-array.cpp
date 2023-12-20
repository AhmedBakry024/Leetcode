class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m,ii=0; i< nums1.size();i++,ii++){
            nums1[i] = nums2[ii];
        }
        sort(nums1.begin(), nums1.end());
    }
};