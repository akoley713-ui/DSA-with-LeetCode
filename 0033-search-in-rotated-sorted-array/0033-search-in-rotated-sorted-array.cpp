class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size(),lo=0,hi=n-1;
        while(lo<=hi){
            int mid=lo+((hi-lo)/2);
            if(arr[lo]<=arr[mid]){
                if(arr[mid]>target&&arr[lo]<=target)hi=mid-1;
                else if(arr[mid]==target)return mid;
                else lo=mid+1;
            }
            else{
                if(arr[mid]<target&&target<=arr[hi])lo=mid+1;
                else if(arr[mid]==target)return mid;
                else hi=mid-1;
            }
        }
        return -1;
    }
};