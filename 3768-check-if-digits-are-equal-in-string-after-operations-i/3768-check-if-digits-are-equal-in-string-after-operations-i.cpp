class Solution {
public:
    bool hasSameDigits(string s) {
         
          vector<int>digit;
          for(char c:s){
        
            digit.push_back(c-'0');

          }

          while(digit.size()>2)
          {
            vector<int>ans;
            reverse(digit.begin(),digit.end());

            for(int i=0;i<digit.size()-1;i++)
            {
                ans.push_back((digit[i]+digit[i+1])%10);

            }
            digit.swap(ans);

              

          }
        return digit[0]==digit[1];
    }
};