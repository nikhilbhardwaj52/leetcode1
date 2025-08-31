class Solution {
public:
      int sum1(int n)
      {
        int sumodd=1;
        int sumod=1;
         for(int i=1;i<n;i++)
         {
            sumodd+=2;
            sumod+=sumodd;

         }
         return sumod;
      }
      int sum2(int n)
      {
        int sumeven=2;
        int sumev=2;
        for(int i=1;i<n;i++)
        {
            sumeven+=2;
            sumev+=sumeven;
        }
        return sumev;
      }

    int gcdOfOddEvenSums(int n) {
    

       int a=sum1(n);
      int b=sum2(n);
        
        return gcd(a,b);
    }
};