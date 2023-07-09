class Solution {
public:
    string reverseWords(string s) {
        string str="", sentence="";
        
        int left=0;
        while(s[left]==' '){
            left++;
        }
        
        int right=s.size()-1;
        while(s[right]==' '){
            right--;
        }
        
        while(left<=right){
            if(s[left]!=' '){
                str+=s[left];
            } else{
                if(s[left-1]==' '){
                    left++;
                    continue;
                } else{
                    sentence = str + " " + sentence;
                    str="";
                }
            }
            left++;
        }
        sentence = str + " " + sentence;
        sentence.erase(sentence.begin() + sentence.size() - 1);
        
        return sentence;
    }
};