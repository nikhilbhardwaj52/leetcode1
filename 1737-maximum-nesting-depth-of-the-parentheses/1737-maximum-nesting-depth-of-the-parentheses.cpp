class Solution {
public:
    int maxDepth(string s) {
        int left=0;
        int ft=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                left++;
                ft=max(left,ft);
            }
           else if(s[i]==')')
           {
            left--;
           }
        }
       return ft; 
    }
};