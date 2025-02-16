class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int right=m-1,left=0;
        while(right>=0&&left<n){

        
        if(matrix[right][left]==target)
        {
            return true;
        }
        else if(matrix[right][left]>target)
        right--;
        else
        left++;


        }
        return false;
    }
};