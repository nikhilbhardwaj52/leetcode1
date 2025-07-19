class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count1=0;
     
        int count=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count1+=1;
                count=max(count1,count);
            }
            else
            {

                count1=0;
            }

            
        }

        return count;
        
    }
};