class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int> pq;
        vector<int> mp(26, 0);

        for (int i = 0; i < tasks.size(); i++) {
            mp[tasks[i] - 'A']++;
        }
        for (int i : mp) {
            if (i)
                pq.push(i);
        }
        int time = 0;
        while (!pq.empty()) {
            vector<int> remain;
            int cycle = n + 1;

            while (cycle && !pq.empty()) {
                int mx = pq.top();
                pq.pop();
                if (mx > 1)
                    remain.push_back(mx - 1);
                cycle--;
                time++;
            }
            for (int i : remain)
                pq.push(i);
            if (pq.empty())
                break;
            time += cycle;
        }
        return time;
    }
};