class Solution {
public:
     
    int beauty(string s1)
    {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        vector<int>v(26,0);

        for(int j=0;j<s1.size();j++)
        {
           v[s1[j]-'a']++;
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>0)
            {
            maxi=max(maxi,v[i]);
            mini=min(mini,v[i]);
            }
            
        }
       
          return maxi-mini;
    }
    int beautySum(string s) {
        int beut=0;
        for(int i=0;i<s.size();i++)
        {
            string temp="";
             
             for(int j=i;j<s.size();j++)
             {
                 temp+=s[j];

                 beut+=beauty(temp);
             }
        }
      return beut;  
    }
};