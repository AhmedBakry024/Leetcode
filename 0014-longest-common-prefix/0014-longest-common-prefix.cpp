class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minNum = 201;
        for(int i = 0;i< strs.size(); i++){
            if (strs[i].length() < minNum) {minNum = strs[i].length();}
        }
        string result = "";
        for (int i = 0; i < minNum; i++){
            char cur = strs[0][i];
            for(int j = 1; j < strs.size(); j++){
                if(strs[j][i] != cur){
                    return result;
                }
            }
            result += cur;
        }
        return result;
    }
};