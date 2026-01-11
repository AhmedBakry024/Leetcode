class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s == "") return 0;
        unordered_map<char,bool> letters;
        int l =  0;
        letters[s[l]] = true;
        int cur = 1, mx = 1;
        for(int i= 1;i<s.length();i++){
            while(letters[s[i]]){
                letters[s[l]] = false;
                l++;
                cur--;
            }
            letters[s[i]] = true;
            cur++;
            if(cur > mx)
                mx = cur;
        }
        return mx;
    }
};