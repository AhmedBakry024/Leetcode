class Solution {
public:
    int passThePillow(int n, int time) {
        int cur = 1;
        while(time > n - 1){
            if(cur == 1) {
                cur = n;
            } else {
                cur = 1;
            }
            time -= n - 1;
        }
        if(cur == 1) {
            cur += time;
        } else {
            cur -= time;
        }
        return cur;
    }
};