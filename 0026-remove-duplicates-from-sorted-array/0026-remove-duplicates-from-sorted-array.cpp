class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        //two pointer approach of finding dupilcate
        //first we have to pointer at 0 imagine it is unique and search by pointer j

        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j]!=nums[i])
            {
                i++;
                nums[i]=nums[j];

            }
        }

     return (i+1); 
    }
};