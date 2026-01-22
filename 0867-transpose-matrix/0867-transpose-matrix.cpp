class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

         
    

       int n=matrix.size();
       int m=matrix[0].size();


        vector<vector<int>>vt(m,vector<int>(n));

        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                vt[j][i]=matrix[i][j];
            }
        }
     return vt;   
    }
};