class Solution {
public:
    string removeStars(string s) {

        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
           
            if(s[i]=='*')
            {
                if(!st.empty())
                {
                    st.pop();

                }
                else
                {
                    return "";
                }
            }
            else
            {
            st.push(s[i]);
            }
        }

        string t="";
        
      while(!st.empty())
      {
        t.push_back(st.top());
         st.pop();
      }
      reverse(t.begin(),t.end());
      return t;
    }
};