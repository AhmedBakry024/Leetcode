class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, vector<int>> m;
        int result = 0;
        for(int i=0; i< s.length(); i++){
            m[s[i]].push_back(i);
            m[t[i]].push_back(i);
        }
        for(int i=0; i< s.length(); i++){
            result += abs(m[s[i]][0] - m[s[i]][1]);
        }
        return result;
    }
};