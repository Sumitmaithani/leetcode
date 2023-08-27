class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size(), mm=n/3+1;
        map<int,int> ls;
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            ls[nums[i]]++;
            if(mm==ls[nums[i]]){
                ans.push_back(nums[i]);
            }
        }
        
        return ans;
    }
};