class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            // Check if mid is a peak
            if ((mid == 0 || nums[mid] > nums[mid - 1]) && 
                (mid == nums.size() - 1 || nums[mid] > nums[mid + 1])) {
                return mid;
            }
            
            // If the element to the right is greater, search the right half
            if (nums[mid] < nums[mid + 1]) {
                start = mid + 1;
            } 
            // Otherwise, search the left half
            else {
                end = mid-1;
            }
        }
        
        
        return -1;
    }
};