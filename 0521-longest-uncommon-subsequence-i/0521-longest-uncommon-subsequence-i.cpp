class Solution {
public:
    int findLUSlength(string a, string b) {

        if(a!=b)
        {
            if(a.size()>b.size())
            {
            return a.size();
            }
            else
            {
                return b.size();
            }
        } 

    return -1;
    }
};