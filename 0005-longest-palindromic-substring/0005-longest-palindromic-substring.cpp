class Solution {
public:

   bool palindrome(int start,int end,string &s,string &s1)
   {
    while(start<end)
    {
        if(s[start]==s[end])
        {
            end--;
            start++;
        }
        else
        {
           return 0;
        }
    }
    return 1;
   
   }
    string longestPalindrome(string s) {
        int start=0;
        int end=1;
        string s1="";


        if(s.size()==1)
        {
            return s;
        }
        if(s.size()==2)
        {
           if(s[0]==s[1])
           {
            return s;
           }
           else
           {
            return s.substr(0,1);
           }
        }


       for(int i=0;i<s.size();i++)
       {
        for(int j=i;j<s.size();j++)
        {
           if( palindrome(i,j,s,s1))
           {
            int len=j-i+1;
            if(len>s1.size())
            {
                s1=s.substr(i,len);
            }
           }
        }
       }
       return s1; 
    }
};