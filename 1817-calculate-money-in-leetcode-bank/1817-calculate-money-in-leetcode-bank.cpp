class Solution {
public:
    int totalMoney(int n) {

        int total=0;
        int monday=1;
        int today=1;

        for(int i=1;i<=n;i++)
        {
            if(i%7==1&&i>1)
            monday++;

            if(i%7==1)
            today=monday;
            else
            today++;

            total+=today;
        }
        return total;
    }
};