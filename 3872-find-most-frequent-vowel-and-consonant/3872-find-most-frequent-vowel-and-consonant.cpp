class Solution {
public:
    bool isvowel(char c)
    {
        return c=='a'||c=='i'||c=='e'||c=='o'||c=='u';
    }
    int maxFreqSum(string s) {
        unordered_map<char,int>m;
        int count1=0;
        int count2=0;
        for(char c:s)
        {
            if(isvowel(c))
            {
            m[c]++;
            count1=max(m[c],count1);
            }
         else {
            m[c]++;
            count2=max(m[c],count2);
         }
        }

        return count1+count2;
    }
};