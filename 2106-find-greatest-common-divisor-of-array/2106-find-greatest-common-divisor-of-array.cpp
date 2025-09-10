class Solution {
public:
    int findGCD(vector<int>& nums) {

        int mini=INT_MAX;
        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
             mini=min(mini,nums[i]);
             maxi=max(maxi,nums[i]);
        }
        
        for(int i=min(mini,maxi);i>0;i--)
        {
            if(mini%i==0&&maxi%i==0)
            {
                return i;
            }
        }
       
       return 1;
    }
};