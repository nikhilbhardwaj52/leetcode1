class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
    
      vector<pair<char,int>>vec(mp.begin(),mp.end());
      sort(vec.begin(),vec.end(),[](auto&a,auto&b){
        return a.second>b.second;
      });
      string s2="";
        for(auto [ch,cnt]:vec)
        {
            s2+=string(cnt,ch);

            }
        
        return s2;
        
    }
    
};