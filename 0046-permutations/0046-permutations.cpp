class Solution {
public:
   void per(vector<int>&nums,vector<int>&temp,int arr[],vector<vector<int>>&ans)
   {
         if(temp.size()==nums.size())
         {
            ans.push_back(temp);
            return;
         }


         for(int i=0;i<nums.size();i++)
         {
            if(!arr[i])
            {
                temp.push_back(nums[i]);
                arr[i]=1;
                per(nums,temp,arr,ans);
                arr[i]=0;
                temp.pop_back();

            }
         }
   }
    vector<vector<int>> permute(vector<int>& nums) {

        vector<int>temp;
        vector<vector<int>>ans;
        int n=nums.size();
        int arr[n];
        for(int i=0;i<nums.size();i++)
        {
            arr[i]=0;
        }
        per(nums,temp,arr,ans);
        return ans;
        
    }
};