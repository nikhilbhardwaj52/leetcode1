class Solution {
public:

  string  has(string &s)
    {
        stack<int>st;
        for(int i=s.size()-1;i>=0;i--)
        {
            st.push(s[i]-'0');
        }
        string s1="";
        while(!st.empty())
        {
            if(!st.empty())
            {  
                int x=st.top();
                st.pop();
                if(!st.empty())
                 {
                    int a=(x+st.top())%10;
                    s1+=a;
                 }

            }
          
        }
         return s1;

    }
  
    
  
    bool hasSameDigits(string s) {
     
      while(s.size()!=2)
      {
        s=has(s);
      }
       
      if(s[0]!=s[1])
      {
        return false;
      }

    return true;
    }
};