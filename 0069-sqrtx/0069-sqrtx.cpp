#include <climits>
class Solution {
public:
    int mySqrt(int x) {
    for(int n=0; n<=x; n++){
        if(1LL*n*n==x){
            return n;
        }
        else if(1LL*n*n>x){
            return n-1;
        }
    }
    return 0;
    }
};