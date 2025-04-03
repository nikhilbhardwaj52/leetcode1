class Solution {
public:






    void nqueens(int col,vector<string>&box,vector<vector<string>>&ans,vector<int>&leftrow,vector<int>&rightdiagonal,vector<int>&leftdiagonal,int n)
    {
         if(col==n)
         {
            ans.push_back(box);
            return;
         }

         for(int row=0;row<n;row++)
         {
            if(leftrow[row]==0&&rightdiagonal[row+col]==0&&leftdiagonal[n-1+col-row]==0)
            {
                box[row][col]='Q';
                leftrow[row]=1;
                rightdiagonal[row+col]=1;
                leftdiagonal[n-1+col-row]=1;
                
                nqueens(col+1,box,ans,leftrow,rightdiagonal,leftdiagonal,n);
                box[row][col]='.';
                leftrow[row]=0;
                rightdiagonal[row+col]=0;
                leftdiagonal[n-1+col-row]=0;

            }
         }


       



    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>box(n);
        vector<vector<string>>ans;
        string s(n,'.');

        for(int i=0;i<n;i++)
    {
        box[i]=s;
    
    }
    vector<int>leftrow(n,0);
    vector<int>rightdiagonal(2*n-1,0);
    vector<int>leftdiagonal(2*n-1,0);
    nqueens(0,box,ans,leftrow,rightdiagonal,leftdiagonal,n);
    return ans;

        
    }
};