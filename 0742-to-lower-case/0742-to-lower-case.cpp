class Solution {
public:
    string toLowerCase(string s) {
        string s1 = "";
        for (int i = 0; i < s.size(); i++) { 
            if (s[i] >= 'A' && s[i] <= 'Z') 
                s1 += ('a' + (s[i] - 'A')); // Convert uppercase to lowercase
            else
                s1 += s[i]; // Keep lowercase letters unchanged
        }
        return s1;
    }
};
