class Solution {
public:
     int gcd(int n1,int n2)
     {
        while(n2!=0)
        {
            int temp=n2;
            n2=n1%n2;
            n1=temp;
        }

         return n1;
     }

     int lcm(int n1,int n2)
     {
        return (n1/gcd(n1,n2))*n2;
     }


    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>st;
        vector<int>vect;

           for(int num:nums)
           {
                  st.push_back(num);
           
                  while(st.size()>1)
                  {
                      int a= st.back();
                      st.pop_back();
                      int b=st.back();
                      st.pop_back();

                      if(gcd(a,b)>1)
                      {
                        st.push_back(lcm(a,b));
                      }
                      else{
                        st.push_back(b);
                        st.push_back(a);
                        break;
                      }
                  }
           }

        return st;
           }
    
};