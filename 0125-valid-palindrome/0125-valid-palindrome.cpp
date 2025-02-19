class Solution {
public:
    bool isPalindrome(string s) {
       string s1="";
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            if(isalnum(c))
            {
                s1+=tolower(c);
            }
        }

        int start=0,end=s1.size()-1;
        while(start<end)
        {
            if(s1[start]!=s1[end])
            return false;

            start++,end--;
        }

        return true;
        
    }
};