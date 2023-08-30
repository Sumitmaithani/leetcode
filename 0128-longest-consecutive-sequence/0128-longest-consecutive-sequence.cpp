class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int lg=1,ans=1;
        sort(nums.begin(),nums.end());
        
        if(nums.size()==0){
            return 0;
        }
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i]-nums[i-1]==1){
                lg++;
            } else if(nums[i]-nums[i-1]!=1 && nums[i]!=nums[i-1]){
                lg=1;
            }
            ans=max(ans,lg);
        }
        
        return ans;
    }
};