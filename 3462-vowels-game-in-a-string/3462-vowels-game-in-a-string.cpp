class Solution {
public:

    bool is(char c)
    {
        return c=='a'||c=='i'||c=='e'||c=='o'||c=='u';
    }

    bool doesAliceWin(string s) {
        
         for(char c:s)
         {
            if(is(c))return true;
         }
       return false;
     
    }
};