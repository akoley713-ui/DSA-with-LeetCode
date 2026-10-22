class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size(),i=0,j=n-1;
        while(i<j){
            if(!((s[i]>='a'&&s[i]<='z')||
                      (s[i]>='0'&&s[i]<='9')||
                      (s[i]>='A'&&s[i]<='Z'))){
                        i++;
                        continue;
            }
            else if(!((s[j]>='a'&&s[j]<='z')||
                      (s[j]>='0'&&s[j]<='9')||
                      (s[j]>='A'&&s[j]<='Z'))){
                        j--;
                        continue;
            }
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]+=32;
            }
            if(s[j]>='A'&&s[j]<='Z'){
                s[j]+=32;
            }
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
};