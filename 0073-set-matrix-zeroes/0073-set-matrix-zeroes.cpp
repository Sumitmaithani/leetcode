class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> columns;
        vector<int> row;
        for(int i=0;i<matrix.size();++i){
            for(int j=0; j<matrix[i].size();++j){
                if(matrix[i][j]==0){
                   for(int m=0;m<matrix.size();++m){
                        for(int n=0; n<matrix[m].size();++n){
                            if((m==i || n==j) && matrix[m][n]!=0){
                                matrix[m][n]=-1000;
                            }
                         }
                    }
                }
            }
        }
        for(int i=0;i<matrix.size();++i){
            for(int j=0; j<matrix[i].size();++j){
                if(matrix[i][j]==-1000){
                   matrix[i][j]=0;
                }
            }
        }
    }
};