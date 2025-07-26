class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=0;
        int t=INT_MAX;
   
        int sum=0;
        int t1=0;
        int t3=0;
        while(end<n)
        {
            sum+=nums[end];

            while(sum>=target)
            {
                t1=end-start+1;
                t=min(t,t1);
                t3=t;
                sum-=nums[start];
                start++;
            }
          
          end++;
        }

        return t3;
    }
};