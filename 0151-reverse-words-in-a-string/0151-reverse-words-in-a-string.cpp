class Solution {
public:
    string reverseWords(string s) {
        
         stack<char>st;
         string s1="";
         string s2="";

         for(int i=0;i<s.size();i++)
         {
            if(st.empty())
            {
                if(s[i]==' ')
                {

                }
                else
                {
                    st.push(s[i]);
                }


            }
            else
            {
                if(s[i]==' ')
                {
                    if(!st.empty())
                    {
                    if(st.top()==' ')
                    {
                       continue;
                    }
                    else
                    {
                      st.push(s[i]);
                    }
                    }
                    
                }
                else
                {
                   st.push(s[i]);
                }
              }
         }

         if(!st.empty())
         {
            
            if(st.top()==' ')
            {
                st.pop();
            }
         }

         while(!st.empty())
         {
           if(st.top()==' ')
           {
            s2+=s1;
            s2+=' ';
            s1="";
           }
           else{
            s1=st.top()+s1;
           }
            st.pop(); 
         }
        
         if(!s1.empty())
         {
         s2+=s1;
         }

         return s2;
    }
};