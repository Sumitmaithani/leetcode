class Solution {
public:
    int countUniPath(int i,int j,int m,int n, vector<vector<int>> &dp){
        if(i==m-1 && j==n-1) return 1;
        else if(i>=m || j>=n) return 0;
        else if(dp[i][j]!=-1) return dp[i][j];
        else return dp[i][j] = countUniPath(i+1,j,m,n,dp)+countUniPath(i,j+1,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1, vector<int> (n+1,-1));
        return countUniPath(0,0,m,n,dp);
    }
};