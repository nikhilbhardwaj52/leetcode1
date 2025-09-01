class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size()!=t.size())return false;

        vector<int>maps(256,-1);
        vector<int>mapt(256,-1);

        for(int i=0;i<s.size();i++)
        {
            char cs=s[i];
            char ct=t[i];

            if(maps[cs]==-1&&mapt[ct]==-1)
            {
                maps[cs]=ct;
                mapt[ct]=cs;

            }
            else{
                if(maps[cs]!=ct||mapt[ct]!=cs)
                {
                    return 0;
                }
            }
        }
       return 1; 
    }
};