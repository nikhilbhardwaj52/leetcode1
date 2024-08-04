class Solution {
public:



void lpsfind(vector<int>&lps,string s){
    int pre=0,suf=1;
    while(suf<s.size())
    {

        if(s[pre]==s[suf])
        {
            lps[suf]=pre+1;
            suf++,pre++;
        }
        else
        {
            if(pre==0){
             lps[suf]=0;
             suf++;
            }
            else
            {
                pre=lps[pre-1];
            }
            
        }

    }
}
    int KMP(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        lpsfind(lps,needle);
        int first=0,second=0;

        while(second<needle.size()&&first<haystack.size())
        {
            if(haystack[first]==needle[second]){
            first++,second++;        }
            else
            {
                if(second==0)
                first++;
                else
                second=lps[second-1];
            }
        }
          if(second==needle.size())
          return 1;
    
    return 0;
    }


    int repeatedStringMatch(string a, string b) {

        if(a==b)
        return 1;

        int repeat=1;
        string temp=a;
        while(temp.size()<b.size())
        {
            temp+=a;
            repeat++;
        }
        if(KMP (temp,b)==1)
        return repeat;
         if(KMP(temp+a,b)==1)
         return repeat+1;
  
  return -1;


        
    }
};