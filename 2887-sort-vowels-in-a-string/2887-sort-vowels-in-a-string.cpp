class Solution {
public:
    string sortVowels(string s) {

        vector<char>vect;
        string t=s;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='E'||s[i]=='I'||s[i]=='U'||s[i]=='O'||s[i]=='A')
            {
               
                vect.push_back(s[i]);
            }
        }
        sort(vect.begin(),vect.end());
       int j=0;  

        for(int k=0;k<s.size();k++)
        {
            if(s[k]=='a'||s[k]=='i'||s[k]=='e'||s[k]=='o'||s[k]=='u'||s[k]=='A'||s[k]=='I'||s[k]=='U'||s[k]=='O'||s[k]=='E')
            {
                t[k]=vect[j];
                j++;
            }
            else
            {
                t[k]=s[k];
            }

        }

    return t;
    }
};