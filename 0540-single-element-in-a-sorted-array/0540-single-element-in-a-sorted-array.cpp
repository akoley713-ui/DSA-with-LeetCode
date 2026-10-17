class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size(),i=0,j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(mid<n-1&&nums[mid]==nums[mid+1]&&(mid%2)==0)i=mid+2;
            else if(mid<n-1&&nums[mid]==nums[mid+1]&&(mid%2)!=0)j=mid-1;
            else if(mid>0&&nums[mid-1]==nums[mid]&&(mid-1)%2==0)i=mid+1;
            else if(mid>0&&nums[mid-1]==nums[mid]&&(mid-1%2)!=0)j=mid-2;
            else return nums[mid];
        }
        return -1;
    }
};