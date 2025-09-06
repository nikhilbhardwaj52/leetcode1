class Solution {
public:
    int beautySum(string s) {
        
        int baut=0;
        for(int i=0;i<s.size();i++)
        {
            vector<int>v(26,0);
               
               for(int j=i;j<s.size();j++)
               {
                   v[s[j]-'a']++;
                    
                    int maxi=INT_MIN;
                    int mini=INT_MAX;
                    for(int f:v)
                    {
                        if(f>0)
                        {
                         maxi= max(maxi,f);
                         mini=min(mini,f);
                        }
                    }
                   baut+=maxi-mini;
               }
        }
        return baut;
    }
};