class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();

       unordered_map<int,int>mpp;



       

        for(auto it:nums)
        {
            mpp[it]++;
            
        }
        for(auto i:mpp)
        {
            if(i.second>n/2)
            {
                return i.first;
            }
        }

    
    return -1;
    }
};