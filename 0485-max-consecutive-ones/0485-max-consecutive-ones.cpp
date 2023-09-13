class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int lg=0,res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) lg++;
            else {
                lg=0;
            }
            res=max(lg,res);
        }
        return res;
    }
};