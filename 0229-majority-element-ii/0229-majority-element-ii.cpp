class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ct=0,el=0, n=nums.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            ct=0;
            if(ans.size()==0 || ans[0]!=nums[i]){
                for(int j=0;j<n;j++){
                    if(nums[i]==nums[j]){
                        ct++;
                    }
                }
            }
            if(ct>n/3){
                ans.push_back(nums[i]);
            }
            
            if(ans.size()==2){
                break;
            }
        }
        
        return ans;
    }
};