class Solution {
public:
    int hIndex(vector<int>& citations) {
        int len=citations.size();
        
        sort(citations.begin(), citations.end());
        
        if(citations[0]>=len){
            return len;
        }
        
        if(len==1){
            return !(citations[0]==0);
        }
        
        for(int i=0; i<len; i++){
            int left=len-i;
            if(left<=citations[i]){
                return left;
            }
        }
        
        return 0;
    }
};