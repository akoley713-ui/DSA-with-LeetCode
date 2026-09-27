class Solution {
public:
    void reverse(vector<int>& arr, int i, int j) {
        while(i<j) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        } 
    }
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        reverse(nums,0,n-1);
        reverse(nums,0,(k%n)-1);
        reverse(nums,k%n,n-1);
        
    }
};