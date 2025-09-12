class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>vt;
        string s1="Fizz";
        string s2="FizzBuzz";
        string s3="Buzz";

        for(int i=1;i<=n;i++)
        {
            if(i%3==0&&i%5==0)
            {
                vt.push_back(s2);
                continue;
            }
            else if(i%3==0)
            {
                vt.push_back(s1);
                continue;
            }
            else if(i%5==0)
            {
                vt.push_back(s3);
                continue;
            }
         
            
                
                vt.push_back(to_string(i));
            
        }
     return vt;   
    }
};