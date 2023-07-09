class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack==needle){
            return 0;
        }
        for(int i=0; i<haystack.length(); i++){
            if(needle[0]==haystack[i]){
                if(needle.substr(0,needle.length())==haystack.substr(i,needle.length())){
                    return i;
                }
            }
        }
        return -1;
    }
};