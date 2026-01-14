class Solution {
public:
    vector<string> subdomainVisits(vector<string>& dom) {
        unordered_map<string, int> m1;
        for (string s : dom) {
            int i = s.find(" ");
            int n = stoi(s.substr(0, i));
            string str = s.substr(i + 1);
            for (int i = 0; i < str.size(); i++) {
                if (str[i] == '.')
                    m1[str.substr(i + 1)] += n;
            }
            m1[str] += n;
        }
        vector<string> ans;
        for (auto m : m1) {
            ans.push_back(to_string(m.second) + " " + m.first);
        }
        return ans;
    }
};