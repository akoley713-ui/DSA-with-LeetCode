class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size(),boats=0,i=0,j=n-1;
        sort(people.begin(),people.end());
        while(i<j){
            int sum=people[i]+people[j];
            if(sum<=limit){
                boats++;
                i++;
                j--;
            }
            else if(sum>limit){
                boats++;
                j--;
            }
        }
        if(i==j) boats++;
        return boats;
    }
};