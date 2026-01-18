class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string cur = "";
        vector<string> strs;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ' && cur != "") {
                strs.push_back(cur);
                cur = "";
            } else if (s[i] != ' ') {
                cur += s[i];
            }
        }
        if (cur != "")
            strs.push_back(cur);
        for (int i = strs.size() - 1; i >= 0; i--) {
            if (i != strs.size() - 1)
                ans += ' ';
            ans += strs[i];
        }

        return ans;
    }
};