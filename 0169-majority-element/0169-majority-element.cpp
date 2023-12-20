class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int n: nums){
            m[n]++;
        }
        pair<int,int> max ;
        for(const auto& [key,value]:m){
            if(value > max.second) max = make_pair(key, value);
        }
        return max.first;
    }
};