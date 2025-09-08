class Solution {
public:
     bool demicall(int n)
     {
        while(n>0)
        {
            if(n%10==0)return true;
            n/=10;
        }
        return false;
     }
    vector<int> getNoZeroIntegers(int n) {
         
       vector<int>ans;
         for(int i=1;i<n;i++)
         {
            int a=i;
            int b=n-i;
              if(!demicall(a)&&!demicall(b))
              {
                  ans.push_back(a);
                  ans.push_back(b);
                  return ans;
              }
              else
              {
                ans.clear();
              }
         }
      
      return ans;
    }
};