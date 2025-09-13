class Solution {
public:
    bool isvowel(char c)
    {
        return c=='a'||c=='i'||c=='e'||c=='o'||c=='u';
    }
    int maxFreqSum(string s) {
        
          vector<int>v(26,0);
          vector<int>ct(26,0);

          for(char c:s)
          {
              if(isvowel(c))
              {
                v[c-'a']++;
              }
              else
              {
                ct[c-'a']++;
              }
          }
          int maxi=INT_MIN;
          for(int i=0;i<v.size();i++)
          {
               maxi=max(maxi,v[i]);
          }
        int maxi2=INT_MIN;
          for(int i=0;i<ct.size();i++)
          {
            maxi2=max(maxi2,ct[i]);
          }
        
      return maxi+maxi2;
    }
};