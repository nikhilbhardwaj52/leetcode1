class Solution {
public:
    string reverseVowels(string s) {
       
       vector<char>vt;
       string t="";

       for(char c:s)
       {
        if(c=='a'||c=='i'||c=='e'||c=='u'||c=='o'||c=='A'||c=='I'||c=='U'||c=='O'||c=='E')
        {
            t=c+t;
        }
       }
    

       string u=s;
       
        int k=0;
       for(int j=0;j<s.size();j++)
       {
          if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='U'||s[j]=='O')
          { 
             u[j]=t[k];
             k++;

          }
          else
          {
            u[j]=s[j];
          }
       } 
        
        return u;
    }
};