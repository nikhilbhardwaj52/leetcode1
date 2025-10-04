class Solution {
public:
    int maxArea(vector<int>& height) {

        int left=0;
        int right=height.size()-1;
        int maxA=0;
        while(left<right)
        {

          int ar=min(height[left],height[right])*(right-left);
          maxA=max(maxA,ar);

          if(height[left]<height[right])
          {
            left++;
          }
          else{ 
        
             right--;
          }

        }
    
       return maxA;
        
    }
};