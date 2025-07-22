class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n=nums.size();
        vector<int>vt(n);
        int k=0;
        int j=1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
               vt[k]=nums[i];
               k+=2;
            }
            else
            {
                vt[j]=nums[i];
                j+=2;
            }
        }


       return vt; 
    }
};