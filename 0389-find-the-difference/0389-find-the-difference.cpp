class Solution {
public:
    char findTheDifference(string s, string t) {

        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(int j=0;j<t.size();j++)
        {
            if(m[t[j]]>0)
            {
                m[t[j]]--;
            }
            else
            {
                return t[j];
            }
        }
        return ' ';
    }
};