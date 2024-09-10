class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        if(x<0){
            return false;
        }
        long n=x;
        while(n!=0){
            
            rev=(n%10)+rev*10;
            n=n/10;
        }
        if(rev==x){
            return true;
        }
        return false;
    }
};