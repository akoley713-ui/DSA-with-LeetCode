class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int minC=0;
        int maxC=matrix[0].size()-1;
        int minR=0;
        int maxR=matrix.size()-1;
        while(minR<=maxR &&  minC<=maxC){
            for(int i=minC;i<=maxC;i++){
                ans.push_back(matrix[minR][i]);
            }
            minR++;
            if(minC<=maxC && minR<=maxR){
                for(int i=minR;i<=maxR;i++){
                    ans.push_back(matrix[i][maxC]);
                }
                maxC--;
            }
            if(minC<=maxC && minR<=maxR){
                for(int i=maxC;i>=minC;i--){
                    ans.push_back(matrix[maxR][i]);
                }
                maxR--;
            }
            if(minR<=maxR && minC<=maxC) {
                for(int i=maxR;i>=minR;i--){
                    ans.push_back(matrix[i][minC]);
                }
                minC++;
            }
        }
        return ans;
    }
};