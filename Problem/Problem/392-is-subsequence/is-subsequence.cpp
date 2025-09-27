class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int m = 0;
        int i = 0;
        for(i = 0; i < s.size(); i++)
        {
            int flag= 0;
            int j = m;
            for(j = m; j < t.size();j++)
            {
                if (t[j] == s[i])
                {
                    m = j + 1;
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                return (false);
        }
        return (true);
        
    }
};