class Solution {
public:
    void reverseString(vector<char>& s)
    {
        vector<char> d(s);
        int i = 0;
        while (i < s.size())
        {
            s[i] = d[s.size() - 1 - i];
            i++;
        }
        
    }
};