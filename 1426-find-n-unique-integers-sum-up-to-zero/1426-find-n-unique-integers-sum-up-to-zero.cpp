class Solution {
public:
    vector<int> sumZero(int n) {

        vector<int>v;
        int j=0;
        for(int i=1;i<n;i++)
        {
            v.push_back(i);
            j+=i;
        }
        v.push_back(-j);

        return v;
    }
};