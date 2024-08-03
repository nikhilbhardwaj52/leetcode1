class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int first=0,second=s.size()-1;
        while(first<second)
        {
            char temp=s[second];
            s[second]=s[first];
            s[first]=temp;
            first++,second--;

        }
       
    }
};