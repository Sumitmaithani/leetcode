class Solution {
public:
    string reverseWords(string s) {
        int start=0,end=0, n=s.size();
        string res;
        for(int i=0;i<n;i++){
            if(s[i]==' ' || i==n-1){
                for(int j=i; j>=start;j--){
                    if(s[j]!=' ') res+=s[j];
                }
                if(i!=n-1) res+=' ';
                start=i;
            }
        }
        return res;
    }
};