class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int cols=matrix[0].size()-1;
        int row=0;
        while(row<n && cols>=0){
            if(matrix[row][cols]>target){
                cols--;
            }
            else if(matrix[row][cols]<target){
                row++;
            }
            else if(matrix[row][cols]==target){
                return true;
            };
        }
        return false;
    }
};