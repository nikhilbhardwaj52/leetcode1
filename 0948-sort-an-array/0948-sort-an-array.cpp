class Solution {
public:
    void merge(vector<int>&nums,int mid,int low,int high)
    {
        vector<int>merge;
        int left=low;
        int right=mid+1;
        while(left<=mid&&right<=high)
        {
            if(nums[left]<nums[right])
            {
            merge.push_back(nums[left]);
            left++;
            }
            else{
                merge.push_back(nums[right]);
                right++;
            }
        }
            while(left<=mid)
            {
                merge.push_back(nums[left]);
                left++;
            }
            while(right<=high)
            {
                merge.push_back(nums[right]);
                right++;
            }
            for(int i=low;i<=high;i++)
            {
                nums[i]=merge[i-low];
            }


        
    }
     void mergesort(vector<int>&nums,int low,int high)

     {
        if(low==high)return;
        int mid=(low+high)/2;

        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        merge(nums,mid,low,high);

     }
    
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    
        
    }
};