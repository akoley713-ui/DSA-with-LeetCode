class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        vector<int> ans;
        int n=arr.size();
        int i=0,j=(n-1);
        while(i<j){
            if (arr[i]+arr[j]==tar){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(arr[i]+arr[j]>tar) j--;
            else if(arr[i]+arr[j]<tar) i++;
        }
        return ans;
    }
};