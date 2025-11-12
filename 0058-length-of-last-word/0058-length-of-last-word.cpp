class Solution {
public:
    int lengthOfLastWord(string s) {
         int cur= s.size() - 1;
        int len = 0;
        while (s[cur] == ' '){cur--;}
        while(cur >= 0 && s[cur] != ' '){
            len++;
            cur--;
        }
        return len;
    }
};