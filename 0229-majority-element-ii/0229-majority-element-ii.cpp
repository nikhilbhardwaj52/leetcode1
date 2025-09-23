class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       vector<int>vt;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto &p:m)
        {
            if(p.second>nums.size()/3)
            {
              vt.push_back(p.first);
             
            }
        }
    
     return vt;
    }
};