class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //sort the array
        sort(nums.begin(),nums.end());
        vector<vector<int>>vt;

        
        for(int i=0;i<nums.size();i++ )
        {
            if(i>0&&nums[i]==nums[i-1])continue;
            int start=i+1;
            int end=nums.size()-1;
            while(start<end)
            {
                int sum=nums[start]+nums[end]+nums[i];
                if(sum==0)
                {
                    vt.push_back({nums[start],nums[end],nums[i]});
                    start++;
                    end--;

                    while(start<end&&nums[start]==nums[start-1])
                    start++;

                    while(start<end&&nums[end]==nums[end+1])
                    end--;


                }
                else if(sum>0)
                {
                  end--;
                }
                else
                start++;
            }
        }
        return vt;
    }
};