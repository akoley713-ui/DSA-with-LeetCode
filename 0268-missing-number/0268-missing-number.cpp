class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n=nums.size();
        // vector<int>freq((n+1),0);
        // for(int i=0;i<n;i++){
        //     freq[nums[i]]++;
        // }
        // for(int i=0;i<freq.size();i++){
        //     if(freq[i]==0)return i;
        // }
        // return -1;
        int n=nums.size();
        int sum=0,nSum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        nSum=n*(n+1)/2;
        return nSum-sum;
    }
};