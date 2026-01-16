class Solution {
public:
    vector<string> subdomainVisits(vector<string>& domains) {
        unordered_map<string, int> totalCount;
        vector<string> ans;

        for (string dom : domains) {
            int space = dom.find(" ");
            int num = stoi(dom.substr(0, space));
            string str = dom.substr(space + 1);

            for (int i = 0; i < str.size(); i++) {
                if (str[i] == '.')
                    totalCount[str.substr(i + 1)] += num;
            }
            totalCount[str] += num;
        }

        for (auto m : totalCount) {
            ans.push_back(to_string(m.second) + " " + m.first);
        }

        return ans;
    }
};