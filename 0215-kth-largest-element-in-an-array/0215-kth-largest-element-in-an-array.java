class Solution {
    public int findKthLargest(int[] nums, int k) {
     int a=0;
             Arrays.sort(nums);
    
    
         a = nums[nums.length-k];
        
        return a;
    }
}