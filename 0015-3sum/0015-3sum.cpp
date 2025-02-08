


        class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // Approach 2 - Modified 2 sum
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {

            // skip the first element
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int first = nums[i];
            int right = n - 1;
            int left = i + 1;

            while (left < right) {

                // element found
                if (first + nums[left] + nums[right] == 0) {
                    ans.push_back({first, nums[left], nums[right]});

                    // skip duplicates
                    while (left < right &&
                           nums[left] == nums[left + 1]) { // req base case
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    left++;
                    right--;

                } else if (first + nums[left] + nums[right] > 0) {
                    right--;
                } else {
                    left++;
                }
            }
        }

        return ans;
        
    }
};