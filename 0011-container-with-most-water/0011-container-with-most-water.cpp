class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0, left=0, right=height.size()-1;
        
        while(left<=right){
            int temp=0;
            if(height[left]<height[right]){
                temp=(right-left)*height[left];
                left++;
            }else {
                temp=(right-left)*height[right];
                right--;
            }
                cout<<temp<<' ';
            if(temp>max){
                max=temp;
            }
        }
        return max;
    }
};