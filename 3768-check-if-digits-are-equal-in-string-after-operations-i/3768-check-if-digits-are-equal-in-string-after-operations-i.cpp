class Solution {
public:
 
    string has(string &s)
    {
        string s2="";
        for(int i=0;i<s.size()-1;i++)
        {
            int a=((s[i]-'0')+(s[i+1]-'0'))%10;
            s2+=to_string(a);
        }
        return s2;
    }
    bool hasSameDigits(string s) {
        while(s.size()>2)
        {
            s=has(s);
        }

        return s[0]==s[1];
    }
};