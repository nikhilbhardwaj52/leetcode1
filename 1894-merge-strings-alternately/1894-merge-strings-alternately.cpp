class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int start=0;
        int start2=0;
        string s="";

        while(start<word1.size()&&start2<word2.size())
        {
            s+=word1[start];
            s+=word2[start2];

            start++;
            start2++;

        }
    while(start<word1.size())
        {
            s+=word1[start];
            start++;
        }
        while(start2<word2.size())
        {
            s+=word2[start2];
            start2++;
        }
        return s;
    }
};