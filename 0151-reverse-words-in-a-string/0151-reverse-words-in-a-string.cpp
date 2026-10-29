class Solution {
public:
    string reverseWords(string s) {
        string str="";
        int i=0,j=0;
        int n=s.size();
        while(i<n){
            if(s[i]!=' ')str+=s[i];
            else if(str.size()>0&&str[str.size()-1]!=' ')str+=' ';
            i++;
        }
        if(str.size()>0&&str[str.size()-1]==' '){
            str.pop_back();
        }
        i=0;
        n=str.size();
        while(j<=n){
            if(j<n&&str[j]!=' ')j++;
            else {
                int k=j;
                while(k>i){
                    swap(str[i],str[k-1]);
                    i++;
                    k--;
                }
                j++;
                i=j;
            }
        }
        int x=0,k=n-1;
        while(x<=k){
            swap(str[x],str[k]);
            x++;
            k--;
        }
        return str;
    }
};