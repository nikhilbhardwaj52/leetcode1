class Solution {
public:
    string reverseVowels(string s) {
        int start=0;
        int end=s.size()-1;
        string vowels="aieouAIEOU";

        while(start<end)
        {
              while(start<end&&vowels.find(s[start])==-1)
              {
                start++;
              }
              while(start<end&&vowels.find(s[end])==-1)
              {
                end--;
              }
            swap(s[start],s[end]);
            start++;
            end--;
        }

    return s;
        
    }
};