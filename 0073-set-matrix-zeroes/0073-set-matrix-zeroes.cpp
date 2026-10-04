class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>copy=matrix;
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(copy[i][j]==0){
                    for(int k=0;k<c;k++){
                        matrix[i][k]=0;
                    }
                    for(int k=0;k<r;k++){
                        matrix[k][j]=0;
                    }
                }
            }
        }
    }
};