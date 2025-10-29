class Solution {
public:
    int smallestNumber(int n) {
        int ans=0;
         for(int i=0;i<n;i++)
         {
            ans+=pow(2,i);
            if(ans>=n)
            {
                return ans;
            }
         }
 
     return ans;
    }
};