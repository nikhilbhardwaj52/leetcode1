class Solution {


public:

      void findcombinations(int index,vector<int>&candidates,int target,vector<int>&D,vector<vector<int>>&ans)
      {
        if(index==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(D);
            }
            return;
        }


       if(candidates[index]<=target){
         D.push_back(candidates[index]);
         findcombinations(index,candidates,target-candidates[index],D,ans);
         D.pop_back();
      }
        findcombinations(index+1,candidates,target,D,ans);
      }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int>D;
        vector<vector<int>>ans;


        findcombinations(0,candidates,target,D,ans);
        return ans;
    }
};