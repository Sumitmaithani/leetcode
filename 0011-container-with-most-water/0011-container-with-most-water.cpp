class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0, left=0, right=height.size()-1;
        
        while(left<right){
            int w=right-left;
            int h=min(height[left],height[right]);
            int area=w*h;
            maxwater=max(area,maxwater);
            
            if(height[left]<height[right]){
                left++;
            } else if (height[left]>height[right]){
                right--;
            } else{
                left++;
                right--;
            }
        }
        return maxwater;
    }
};