class Solution {
public:
    int climbStairs(int n) {
    int ways =1,ways2=2,totalways=0;
    if(n<=1)
    {
        return 1;

    }
    if(n==2)
    {
        return 2;
    }
    for(int i=3;i<=n;i++)
    {
        totalways=ways+ways2;
        ways=ways2;
        ways2=totalways;
    }
   return totalways;
    }
        
    
};