class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=1;
        unordered_set<int> st;
        
        if(nums.size()==0){
            return 0;
        }
        
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        
        for(auto it : st){
            if(st.find(it-1)==st.end()){
                int ct=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    ct=ct+1;
                }
                ans=max(ans,ct);
            }
        }
        
        return ans;
    }
};