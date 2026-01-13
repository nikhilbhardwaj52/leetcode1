class Solution {
public:
    bool isPalindrome(int x) {
        long long ans=0;
        int anss=x;
        if(x<0)
        return 0;
        while(x)
        {
            int last=x%10;
            ans=ans*10+last;
            x=x/10;
        }
        
        if(ans==anss)
        return 1;
        else
        return 0;
    }
};