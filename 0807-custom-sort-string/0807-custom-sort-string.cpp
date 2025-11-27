class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        for(char i:order){
            while(mp[i]){
                ans+=i;
                mp[i]--;
            }
        }
        for(auto& i:mp){
            while(i.second){
                ans+=i.first;
                i.second--;
            }
        }
        return ans;
    }
};