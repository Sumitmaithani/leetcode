class Solution {
public:
    string reverseWords(string s) {
        int start=0,end=0;
        string res;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' || i==s.size()-1){
                for(int j=i; j>=start;j--){
                    if(s[j]!=' '){
                        res+=s[j];
                    }
                }
                if(i!=s.size()-1) res+=' ';
                start=i;
            }
        }
        return res;
    }
};