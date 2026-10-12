class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),maxArea=0,i=0,j=n-1;
        while(i<j){
            int h;
            if(height[i]>height[j]) h=height[j];
            else h=height[i];
            int Area=h*(j-i);
            if(Area>maxArea) maxArea=Area;
            if(height[i]>height[j]) j--;
            else i++;
        }
        return maxArea;
    }
};