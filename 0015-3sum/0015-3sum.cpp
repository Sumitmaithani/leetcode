class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<n; i++){
            if(i!=0 && nums[i-1]==nums[i]) continue;
            
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                } else if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                } else {
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        
        return ans;
    }
};