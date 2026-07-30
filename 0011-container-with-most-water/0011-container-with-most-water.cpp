class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0 ;
        int start = 0 , end = height.size()-1 ;
        while(start < end){
            int w = end - start ;
            int h  = min(height[end], height[start]);
            int area  = w*h ;
            maxwater = max(area , maxwater);
            if(height[end]<height[start]){
                end-- ;
            }
            else{
                start++ ;
            }
        }
        return maxwater;
    }
};