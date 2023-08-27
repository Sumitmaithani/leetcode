class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ct1=0,ct2=0,el1=0,el2=0, n=nums.size(),mm=n/3;
        vector<int> ans;
        
        for(int i=0; i<n;i++){
            if(ct1==0 && el2!=nums[i]){
                ct1=1;
                el1=nums[i];
            } else if(ct2==0 && el1!=nums[i]){
                ct2=1;
                el2=nums[i];
            } 
            else if(el1==nums[i]) ct1++;
            else if(el2==nums[i]) ct2++;
            else{
                ct1--;
                ct2--;
            }
        }
        
        ct1=0,ct2=0;
        for(int i=0; i<n; i++){
            if(el1==nums[i]) ct1++;            
            if(el2==nums[i]) ct2++;
        }
        
        if(ct1>mm && el1!=el2){
            ans.push_back(el1);
        }
        
        if(ct2>mm){
            ans.push_back(el2);
        }
        
        return ans;
    }
};