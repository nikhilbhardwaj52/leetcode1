class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int rowstart=0;
        int rowend=matrix.size()-1;
        int colstart=0;
        int colend=matrix[0].size()-1;
        vector<int>ans;

     while(rowstart<=rowend&&colstart<=colend)
     {
        
        for(int i=colstart;i<=colend;i++)
          ans.push_back(matrix[rowstart][i]);
          
          rowstart++;
        
        
        
        for(int j=rowstart;j<=rowend;j++)
        
            ans.push_back(matrix[j][colend]);
            colend--;
        
      
       if(rowstart<=rowend)
       {
        for(int k=colend;k>=colstart;k--)
         ans.push_back(matrix[rowend][k]);
            rowend--;
       }
        
        if(colstart<=colend)
        {
        for(int l=rowend;l>=rowstart;l--)
           ans.push_back(matrix[l][colstart]);
         colstart++;
        }
        
     }

     return ans;   
    }
};