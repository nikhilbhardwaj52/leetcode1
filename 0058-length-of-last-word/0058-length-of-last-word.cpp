class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        for(int i=s.size()-1;i>=0;i-- )


        {
            if(count!=0)
            {

                 if(s[i]==' ')
                 { return count;
                 }
                 else
                 {
                    count++;
                 }
            }
            else
            {
                if(s[i]==' ')
                {
                  
                }
                else
                {
                    count++;
                }

            }


        }
        return count;
    }
};