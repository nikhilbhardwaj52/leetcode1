class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>vt(26,0);
        for(char c:magazine)
        {
            vt[c-'a']++;

          
            }
    
        for(char c:ransomNote)
        {
            if(vt[c-'a']>0)
            {
               vt[c-'a']--;
            }
            else
            {
                return false;
            }
        }

        

    return true;
    }
};