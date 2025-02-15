class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int N=matrix.size(), M=matrix[0].size(), start=0, end=N*M-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int col_index=mid%M;
            int row_index=mid/M;
            if(matrix[row_index][col_index]==target)
            return true;
            else if(matrix[row_index][col_index]>target)
            end=mid-1;
            else
            start=mid+1;

        }

        return false;
        
    }
};