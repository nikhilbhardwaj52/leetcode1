class Solution {
public:
    char findTheDifference(string s, string t) {

        vector<int>m(26,0);
        for(int i=0;i<s.size();i++)
        {
            m[s[i]-'a']++;
        }
        for(int j=0;j<t.size();j++)
        {
            if(m[t[j]-'a']>0)
            {
                m[t[j]-'a']--;
            }
            else
            {
                return t[j];
            }
        }
        return ' ';
    }
};