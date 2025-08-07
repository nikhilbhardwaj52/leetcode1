class Solution {
public:
    bool rotateString(string s, string goal) {
        

        queue<char>q;
        for(int i=0;i<s.size();i++)
        {
            q.push(s[i]);
        }
        queue<char>q1;
    for(int j=0;j<goal.size();j++)
    {
        q1.push(goal[j]);
    }
    int n=s.size();
        while(n>0)
        {
            char a=q.front();
            q.pop();
            q.push(a);

            if(q==q1)
            {
                return true;
            }

          n--;

           
        }

    return false;
    }
};