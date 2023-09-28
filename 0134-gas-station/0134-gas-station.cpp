class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0;
        for(int i=0;i<gas.size();i++)
            totalGas+=gas[i];
        
        int totalCost = 0;
        for(int i=0;i<cost.size();i++)
            totalCost+=cost[i];
        
        if(totalGas < totalCost)
            return -1;
        
        int current=0, start=0;
        for(int i=0; i<gas.size(); i++){
            current += gas[i]-cost[i];
            if(current<0){
                 start=i+1;
                 current=0;
            }     
        }
             
        return start;
    }
};