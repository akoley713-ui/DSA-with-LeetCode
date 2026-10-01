class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0; i<numRows; i++){
            vector<int> arr(i+1, 1); //Iska matlab ek arr naam ka array bna rhe hain jon (i+1) size ka ho aur uski default value 1 ho...
            for(int j=1; j<i; j++){
                arr[j]=ans[i-1][j-1]+ans[i-1][j];//Jab i=0 hoga tab ye condition false hogi aur default value 1 print hoga...
            }
            ans.push_back(arr);
        }
        return ans;
    }
};