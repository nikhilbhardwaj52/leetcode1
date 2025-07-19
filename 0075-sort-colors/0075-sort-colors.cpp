class Solution {
public:
    void sortColors(vector<int>& arr) {

        int count0=0;
        int count1=0;
        int count2=0;
        if(arr.size()==1)
        {
            return;
        }


        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                count0+=1;

            }
            else if(arr[i]==1)
            {
                count1+=1;
            }
            else{
                count2+=1;
            }
        }   
       int i=0;
        while(count0!=0)
        {
            arr[i]=0;
            i++;
            count0--;
        }   
        
        while(count1!=0)
        {
            arr[i]=1;
            i++;
            count1--;
        }  
        while(count2!=0)
        {
            arr[i]=2;
            i++;
            count2--;
        }
    }
};