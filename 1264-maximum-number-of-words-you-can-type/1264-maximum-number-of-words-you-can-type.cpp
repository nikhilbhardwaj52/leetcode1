class Solution {
public:
    
    int sear(string s,vector<int>vt)
    { 
         for(int i=0;i<s.size();i++)
         {
            if(vt[s[i]-'a']>0)
            { 
                return 0;

            }
         }
    
      return 1;
         
    }
    int canBeTypedWords(string text, string brokenLetters) {


         vector<int>vt(26,0);
         int count=0;
         string s="";
        for(int i=0;i<brokenLetters.size();i++)
        {
            vt[brokenLetters[i]-'a']++;
        }
        for(int i=0;i<text.size();i++)
        { 

        
            
                if(text[i]==' ')
                {
                  count+= sear(s,vt);
                   s="";
                 }

                else
                {
                    s+=text[i];
                }
            
           
        }
      
       count+=sear(s,vt);
    return count;
        
    }
};