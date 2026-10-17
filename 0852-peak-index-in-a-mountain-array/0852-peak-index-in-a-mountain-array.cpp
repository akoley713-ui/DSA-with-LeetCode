class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size(),i=0,j=n-1;
        while(i<=j){
            int m=i+((j-i)/2);
            if(arr[m]>arr[m+1]&&arr[m]>arr[m-1])return m;
            else if(arr[m]<=arr[m+1])i=m+1;
            else if(arr[m]>=arr[m+1])j=m-1;
        }
        return i;
    }
};