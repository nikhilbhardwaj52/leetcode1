class Solution {
public:
    string addStrings(string num1, string num2) {

        int endfirst=num1.size()-1;
        int endsec=num2.size()-1;
        string s="";
        int carry=0;
        int sum=0; 

        while(endfirst>=0||endsec>=0||carry)
        {
            
            if(endfirst>=0)
            {
                sum+=num1[endfirst]-'0';
                endfirst--; 
            }
            if(endsec>=0)
            {               
                 sum+=num2[endsec]-'0';
                endsec--;
            }
          
          s.push_back(sum%10+'0');

          carry=sum/10;

          sum=carry;
          
          
        }
        reverse(s.begin(),s.end());

    return s;
    }
};