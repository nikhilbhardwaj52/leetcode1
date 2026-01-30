class Solution {
public:
    string capitalizeTitle(string title) {

        int i=0;
        int n=title.size();

        while(i<n)
        {
            int start=i;

            while(i<n&&title[i]!=' ')
             i++;
            
            int len=i-start;

            if(len>2)            {
                title[start]=toupper(title[start]);
                for(int j=start+1;j<i;j++)
                  title[j]=tolower(title[j]);
            }
            else
            {
                for(int j=start;j<n;j++)
                 title[j]=tolower(title[j]);
            }

            i++;
        }
       return title; 
    }
};