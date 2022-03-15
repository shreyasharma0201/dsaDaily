class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        
        int l = 0, h = height.size()-1;
        
        while(l <= h){
            int water = (h - l)*min(height[l], height[h]);
            maxwater = max(water, maxwater);
            
            if(height[l] < height[h]) l++;
            else h--;
        }
        
        return maxwater;
    }
};
