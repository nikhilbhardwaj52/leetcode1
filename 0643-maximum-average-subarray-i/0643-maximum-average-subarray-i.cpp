class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        int start=0;

        // First window sum
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        double maxi = sum;

        // Slide the window
        for (int i = k; i < n; i++) {
            sum += nums[i];            // ✅ Corrected index here
            sum -= nums[start];        // remove the element that slid out
            maxi = max(sum, maxi);
            start++;
        }

        return maxi / k;
    }
};
