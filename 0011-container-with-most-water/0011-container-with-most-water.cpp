class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int cur = min(height[l], height[r]) * (r - l);
        while(l < r){
            if((min(height[l], height[r])) * (r - l) > cur) {
                cur = min(height[l], height[r]) * (r - l);
            }
            if(height[l] > height[r]){
                r--;
            }
            else if(height[l] <= height[r]){
                l++;
            }
        }
        return cur; 
    }

};