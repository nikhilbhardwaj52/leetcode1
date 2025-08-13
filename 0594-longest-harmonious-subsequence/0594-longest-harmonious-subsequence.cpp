class Solution {
public:
    
    int findLHS(vector<int>& nums) {

        int start=0;
        int end=0;
        int n=nums.size();
        int len=0;


        sort(nums.begin(),nums.end());


       for(int end=0;end<nums.size();end++)
       {
        while(nums[end]-nums[start]>1)
        {
            start++;

        }
        if(nums[end]-nums[start]==1)
        {
            len=max(len,end-start+1);
        }
        
       }
       return len; 
    }
};