class Solution {
public:
    int sumi(vector<int>&nums,int n)
    { 
        if(n==1)
        {
         return nums[0];
        }
         vector<int>newi;
         for(int i=0;i<nums.size()-1;i++)
         { 
            int add=(nums[i]+nums[i+1])%10;
              newi.push_back(add);  
                    
              
         }
         int y=newi.size();

        return sumi(newi,y);

       }
    int triangularSum(vector<int>& nums) {
       int n=nums.size();
      return  sumi(nums,n);

          
     
    }
};