class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long ans=0;
        long long min=INT_MIN;
        for(int i=0;i<nums.size();++i){
            ans+=nums[i];
            
            if(ans>min){
                min=ans;
            }
            
            if(ans<=0){
                ans=0;
            }
        }
        return min;
    }
};