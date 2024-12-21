class Solution {
    public int kthSmallest(int[][] matrix, int k) {
        int n=matrix.length;
        int m=matrix[0].length;
        int p=m*n;
        int arr[]=new int[p];
        int l=0;
        for(int i=0;i<n;i++)
          {
            for(int j=0;j<m;j++)
            {
                arr[l]=matrix[i][j];
                l++;
            }
          }
          Arrays.sort(arr);

        
        return arr[k-1];
    }
}