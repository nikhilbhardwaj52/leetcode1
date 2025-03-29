class Solution {
public:
    void perfect(vector<int>& arr, int target, vector<int>& temp, int n, int s, vector<vector<int>>& ans, int index) {
        // If sum reaches target, add to result and return
        if (s == target) {
            ans.push_back(temp);
            return;
        }
        
        // Stop if sum exceeds target
        if (s > target || index == n) return;

        for (int i = index; i < n; i++) {
            // Skip duplicates
            if (i > index && arr[i] == arr[i - 1]) continue;
            
            temp.push_back(arr[i]);  // Include current element
            perfect(arr, target, temp, n, s + arr[i], ans, i + 1);  // Move to next index
            temp.pop_back();  // Backtrack
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());  // Sort to handle duplicates
        vector<int> temp;
        vector<vector<int>> ans;
        perfect(arr, target, temp, arr.size(), 0, ans, 0);
        return ans;
    }
};
