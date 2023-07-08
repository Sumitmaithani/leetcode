class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common="";
        sort(strs.begin(),strs.end());
        int len=strs.size();
        
        string first=strs[0], last=strs[len-1];
        
        for(int i=0; i<first.size(); i++){
            if(first[i]!=last[i]){
                return common;
            }
            common+=first[i];
        }
        
        return common;
    }
};