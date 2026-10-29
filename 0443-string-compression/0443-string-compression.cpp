class Solution {
public:
    int compress(vector<char>& chars) {
        string str="";
        int n=chars.size(),i=0,j=0,count=0;
        while(j<n){
            char ch=chars[i];
            while(j < n && chars[j] == ch){
                count++;
                j++;
            }
            str+=ch;
            if(count>1){
                str+=to_string(count);
            }
            i=j;
            count=0;
        }
        for(int k=0;k<str.size();k++)chars[k]=str[k];
        return str.size();
    }
};