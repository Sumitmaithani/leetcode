class Solution {
public:
    int integerBreak(int n) {
        if(n==2) return 1;
        if(n==3) return 2;
        int nearestNumOfN = n/3;
        if(n%3==1) return pow(3, nearestNumOfN-1)*4;
        return pow(3, nearestNumOfN)*(n % 3 == 2 ? 2 : 1);
    }
};