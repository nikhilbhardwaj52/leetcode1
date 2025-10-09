class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {

        int n=mat.size();
        int m=mat[0].size();
        vector<int>ans;
        vector<int>temp;

        for(int j=0;j<m;j++)
        {
           int t=0;
           int r=j;
           temp.clear();

           while(t<n&&r>=0)
           {
            temp.push_back(mat[t][r]);
            t++;
            r--;
           }
           if(j%2==0)reverse(temp.begin(),temp.end());
           ans.insert(ans.end(),temp.begin(),temp.end());

        }

        for(int i=1;i<n;i++)
        {
            int t=i;
            int r=m-1;
            temp.clear();

            while(t<n&&r>=0)
            {
            temp.push_back(mat[t][r]);
                t++;
                r--;
            }
            if((m+i-1)%2==0)reverse(temp.begin(),temp.end());
            ans.insert(ans.end(),temp.begin(),temp.end());
        }
        return ans;
    }
};