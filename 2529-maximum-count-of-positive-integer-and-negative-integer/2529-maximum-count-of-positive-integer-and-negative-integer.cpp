class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size(),lo=0,hi=n-1,pos=0,neg=0;
        while(lo<=hi){
            int mid=lo+((hi-lo)/2);
            if(nums[mid]<0) lo=mid+1;
            else{
                neg=mid;
                hi=mid-1;
            }
        }
        neg=lo;
        lo=0;
        hi=n-1;
        while(lo<=hi){
            int mid=lo+((hi-lo)/2);
            if(nums[mid]<=0) lo=mid+1;
            else{
                pos=n-mid;
                hi=mid-1;
            }
        }
        if(pos>neg) return pos;
        else return neg;
    }
};