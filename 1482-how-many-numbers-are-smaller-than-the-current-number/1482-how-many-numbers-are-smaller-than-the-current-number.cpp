class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> cnt(101,0);
        for(int i=0;i<nums.size();i++){
            cnt[nums[i]]++;
        }
        unordered_map<int,int> m1;
        int index = 0;
        for(int i=0;i<cnt.size();i++){
            if(cnt[i]){ 
                m1[i] = index;
                index +=cnt[i];
            }
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(m1[nums[i]]);
        }
        return ans;
    }
};