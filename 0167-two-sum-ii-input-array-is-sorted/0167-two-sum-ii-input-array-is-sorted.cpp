class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        vector<int> ans(2);
        int n=arr.size();
        int i=0,j=(n-1);
        while(i<j){
            int sum=arr[i]+arr[j];
            if (sum==tar){
                ans[0]=i+1;;
                ans[1]=j+1;
                return ans;
            }
            else if(sum>tar) j--;
            else if(sum<tar) i++;
        }
        return ans;
    }
};