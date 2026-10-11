class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n=nums1.size(),m=nums2.size();
        int answer1=0,answer2=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    answer1++;
                    break;
                }
            }
        }
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(nums1[i]==nums2[j]){
                    answer2++;
                    break;
                }
            }
        }
        
        ans.push_back(answer1);
        ans.push_back(answer2);
        return ans;
    }
};