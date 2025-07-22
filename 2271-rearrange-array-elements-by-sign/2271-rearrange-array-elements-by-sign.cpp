class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
            
            vector<int>vect1;
            vector<int>vect2;
            vector<int>vect3;

            for(int i=0;i<arr.size();i++)
            {
                if(arr[i]>0)
                {
                    vect1.push_back(arr[i]);
                }
                else if(arr[i]<0)
                {
                    vect2.push_back(arr[i]);
                }
                
            }
            int i=0;
            int j=0;

            while(i<vect1.size()&&j<vect2.size())
            {
                vect3.push_back(vect1[i++]);
                vect3.push_back(vect2[j++]);

            }


            return vect3;
                
       }
       
    
};