class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //sort the array
        sort(nums.begin(),nums.end());

        //vector
        set<vector<int>>vt;
        vector<vector<int>>v;

        //new 

         for(int i=0;i<nums.size();i++)
         {
            int first=0-nums[i];

            int start=i+1;
            int end=nums.size()-1;

            while(start<end)
            {
                if(nums[start]+nums[end]==first)
                {
                vt.insert({nums[start],nums[end],nums[i]});
                start++;
                end--;
                }

                else if(nums[start]+nums[end]>first)
                end--;

                else
                start++;
            }
         }

         for(auto it=vt.begin();it!=vt.end();it++ )
         {
            v.push_back(*it);
         }
        

        return v;
    }
};