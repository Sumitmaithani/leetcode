class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0, pst=0, lsf=INT_MAX;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<lsf){
                lsf=prices[i];
            }
            pst=prices[i]-lsf;
            if(profit<pst){
                profit=pst;
            }
        }
        return profit;
    }
};