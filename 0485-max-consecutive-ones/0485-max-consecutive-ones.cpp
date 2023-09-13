class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int lg=1, res=1;
        if(nums.size()==0) return 0;
        
        if(nums.size()==1){
            if(nums[0]==1) return 1;
            return 0;
        }
        
        if(nums.size()==2){
            if(nums[0]==nums[1] && nums[0]==1) return 2;
            else if(nums[0]==1 || nums[1]==1) return 1;
            return 0;
        }
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]==1){
                if(nums[i-1]==nums[i]){
                    lg++;
                    res=max(lg,res);
                }
            }
            else{
                lg=1;
            }
        }
        return res;
    }
};