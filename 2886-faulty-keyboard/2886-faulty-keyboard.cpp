class Solution {
public:
   string final(string s2)
   {
       int i=0;
       int j=s2.size()-1;
       while(i<j)
       {
         swap(s2[i],s2[j]);
         i++;
         j--;
       }
     return s2;
   }

    string finalString(string s) {
        string s1="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='i')
            {
               s1=final(s1);
            }
            else{
           s1+=s[i]; 
            } 
        }
    
     return s1;
    }
};