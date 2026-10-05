class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int> (n));
        int minR=0,minC=0,maxR=ans.size()-1,maxC=ans[0].size()-1;
        int num=1;
        while(minR<=maxR && minC<=maxC){
            for(int i=minC;i<=maxC;i++){
                ans[minR][i]=num;
                num++;
            }
            minR++;
            for(int i=minR;i<=maxR;i++){
                ans[i][maxC]=num;
                num++;
            }
            maxC--;
            for(int i=maxC;i>=minC;i--){
                ans[maxR][i]=num;
                num++;
            }
            maxR--;
            for(int i=maxR;i>=minR;i--){
                ans[i][minC]=num;
                num++;
            }
            minC++;
        }
        return ans;
    }
};