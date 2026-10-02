class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m;i<(m+n);i++){
            nums1.pop_back();
        }
        for(int j=0;j<n;j++){
            nums1.push_back(nums2[j]);
        }
        int s=nums1.size();
        for(int i=0;i<s;i++){
            int minIndex=i;
            for(int j=i+1; j<s; j++){
                if(nums1[j]<nums1[minIndex]){
                    minIndex=j;
                }
            }
            swap(nums1[i],nums1[minIndex]);
        }
    }
};