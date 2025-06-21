class Solution {
public:
    bool isValid(string s) {

        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(s[i]==')')
            {
              if(st.top()=='(')
              {
                st.pop();
              }
              else
              return 0;
            }
             
            else if(s[i]==']')
            {
              if(st.top()=='[')
              {
                st.pop();
              }
              else 
              return 0;
            }
            else if(s[i]=='}')
            {
                if(st.top()=='{')
                {
                    st.pop();
                }
                else
                return 0;
            }
            else{
                st.push(s[i]);
            }
             }
        
       return st.empty();
    }
};