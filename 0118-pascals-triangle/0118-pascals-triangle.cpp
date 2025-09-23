class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>vt;
        vector<int>vt1;

        if(numRows==1)
        {
            vt1.push_back(1);
            vt.push_back(vt1);
        }
        if(numRows>=2)
        {
            vt1.push_back(1);
            vt.push_back(vt1);
            vt1.push_back(1);
            vt.push_back(vt1);
         }
   
       for(int i=3;i<=numRows;i++)
       {
        vector<int>prev=vt.back();
        vector<int>curr;
        curr.push_back(1);
          for(int j=1;j<prev.size();j++)
          {
            curr.push_back(prev[j-1]+prev[j]);
          }
         curr.push_back(1);
         vt.push_back(curr);
       }

       return vt;
    }
};