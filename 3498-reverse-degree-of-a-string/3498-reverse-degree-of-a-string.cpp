class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0; i<s.size(); i++){
            int c=(int)(s[i]);
            int reverse= 26-(c-97);
            sum=sum+(reverse*(i+1));
        }
        return sum;
    }
};