class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common="";
        string commonArray[strs.size()-1];
        string lastCommon="";
        
        if(strs.size()==1){
            return strs[0];
        }
        
        for(int i=1; i<strs.size(); i++){
            common="";
            for(int j=0; j<strs[i].size(); j++){
                 if(strs[i-1][j]!=strs[i][j]){
                    break;
                }
                if(strs[i-1][j]==strs[i][j]){
                    if(lastCommon==""){
                        common+=strs[i-1][j];
                    } else{
                        if(lastCommon[j]==strs[i-1][j]){
                            common+=strs[i-1][j];
                        }
                    }
                    
                }
            }
            commonArray[i-1]=common;
            lastCommon=common;
        }
        int min=commonArray[0].size();
        
         for(int i=0; i<strs.size()-1; i++){
             if(commonArray[i]==""){
                 return "";
             }
             if(min>commonArray[i].size()){
                 min=commonArray[i].size();
                 common=commonArray[i];
             }
         }
        
        return common;
    }
};