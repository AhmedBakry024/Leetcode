class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m1;
        vector<int> v1;
        for(int i = 0;i<nums1.size();i++){
            m1[nums1[i]] = 1;
        }
        for(int i = 0;i<nums2.size();i++){
            if (m1[nums2[i]] == 1){
                v1.push_back(nums2[i]);
                m1[nums2[i]] = 2;
            }
        }
        return v1;
    }
};