class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> m1;
        int left = 0, mx = 0;

        for (int i = 0; i < fruits.size(); i++) {
            m1[fruits[i]]++;

            while (m1.size() > 2) {
                m1[fruits[left]]--;
                if (m1[fruits[left]] == 0)
                    m1.erase(fruits[left]);
                left++;
            }
            mx = max(mx, i - left + 1);
        }
        return mx;
    }
};
