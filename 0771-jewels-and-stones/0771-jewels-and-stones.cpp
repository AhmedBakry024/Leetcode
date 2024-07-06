class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int result = 0;
        unordered_map<char, int> m;
        for(int i=0;i < jewels.length(); i++){
            m[jewels[i]] = 1;
        }
        for(int i = 0; i< stones.length(); i++){
            if(m[stones[i]] == 1)
                result++;
        }
        return result;
    }
};