class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        int n=word.size();
        for(char c:word)
        {
            if(isupper(c))
            {
                count++;
            }
        }
    
      return (count==0||count==n||(count==1&&isupper(word[0])));
    }
};