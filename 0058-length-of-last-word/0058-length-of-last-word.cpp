class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0, flag=0;
        
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]==' ' && flag){
                break;
            } 
            if(s[i]!=' '){
                count++;
                flag=1;
            } 
        }
        
        return count;
    }
};