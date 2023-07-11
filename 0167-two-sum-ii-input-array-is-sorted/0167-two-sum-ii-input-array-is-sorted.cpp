class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int> sumTwo={0,0};
        // for(int i=0; i<numbers.size(); i++){
        //     for(int j=i+1; j<numbers.size(); j++){
        //         if(numbers[i]+numbers[j]==target){
        //             sumTwo[0]=i+1;
        //             sumTwo[1]=j+1;
        //         }
        //     }
        // }
        
        int left=0, right=numbers.size()-1;
        
        while(left<=right){
            if(numbers[left]+numbers[right]==target){
                return {left+1,right+1};
            } else if(numbers[left]+numbers[right]>target){
                right--;
            } else{
                left++;
            }
        }
        
        return {};
    }
};