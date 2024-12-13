class Solution {
    public int maxSubArray(int[] nums) {
        int current = 0;
        int maxs =Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++)
        {

           current+=nums[i];

            maxs=Math.max(current,maxs);
            
            if(current<0){
            current=0;
            }
            
            

        



        }
        


        return maxs;

        
    }
};