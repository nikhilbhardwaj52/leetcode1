class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n=nums.size();

        int ans1=0;
        int ans2=0;

        for(int i=0;i<nums.size();i++)
        {
            ans1=ans1^nums[i];
        }
        for(int i=0;i<=n;i++)
        {
            ans2=ans2^i;
        }

     return ans1^ans2;
    }
};