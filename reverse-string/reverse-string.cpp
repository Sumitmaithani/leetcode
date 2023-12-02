class Solution {
public:
    void swapStr(vector<char>& s,int l,int n){
        if(l>=n){
            return;
        }
        swap(s[l],s[n]);
        swapStr(s,l+1,n-1);
    }
    
    void reverseString(vector<char>& s) {
        int n=s.size()-1;
        int l=0;
        swapStr(s,l,n);
    }
};