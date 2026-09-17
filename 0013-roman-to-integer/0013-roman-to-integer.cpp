int value(char c){
    if(c == 'I') return 1 ;
    if(c == 'V') return 5 ;
    if(c == 'X') return 10 ;
    if(c == 'L') return 50 ;
    if(c == 'C') return 100 ;
    if(c == 'D') return 500 ;
    if(c == 'M') return 1000 ;
    return 0;
}
class Solution {
public:
    int romanToInt(string s) {
        int current, next=0;
        int ans=0;
        for(int i=0; i< s.size(); i++){
            current=value(s[i]);
            if((i+1)<s.size()){
                next=value(s[i+1]);
            }
            else{
                next=0;
            }
            if(current>=next){
                ans=ans+current;
            }
            else{
                ans=ans-current;
            }
            
        }
        
        return ans;
    }
};