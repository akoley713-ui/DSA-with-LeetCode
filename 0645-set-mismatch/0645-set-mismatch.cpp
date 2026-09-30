class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum=0;
        vector<int> ans;
        int n=nums.size();
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            sum=sum+nums[i];
            if(i>0 && nums[i]==nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
        int missing = (n*(n+1))/2 - (sum - ans[0]);
        ans.push_back(missing);
        return ans;
    }
};