class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0, soldToday=0, buyLeast=INT_MAX;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<buyLeast){
                buyLeast=prices[i];
            }
            soldToday=prices[i]-buyLeast;
            if(profit<soldToday){
                profit=soldToday;
            }
        }
        return profit;
    }
};