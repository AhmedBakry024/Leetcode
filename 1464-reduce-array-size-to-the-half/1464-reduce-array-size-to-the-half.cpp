class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int half = arr.size() / 2;

        unordered_map<int, int> m1;
        for (int i : arr) {
            m1[i]++;
        }
        vector<int> freq;
        for (auto it : m1) {
            freq.push_back(it.second);
        }
        sort(freq.begin(), freq.end(), greater<int>());
        int removed = 0, ans = 0;
        for (int i = 0; i < freq.size() && removed < half; i++) {
            removed += freq[i];
            ans++;
        }
        return ans;
    }
};