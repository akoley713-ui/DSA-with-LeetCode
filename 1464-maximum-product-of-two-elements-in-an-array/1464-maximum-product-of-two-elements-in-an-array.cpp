class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1; i++){
            int minIndex=i;
            for(int j=i+1; j<n; j++){
                if(nums[j]<nums[minIndex]){
                    minIndex=j;
                }
            }
            swap(nums[i],nums[minIndex]);
        }
        return ((nums[n-1]-1)*(nums[n-2]-1));
    }
};