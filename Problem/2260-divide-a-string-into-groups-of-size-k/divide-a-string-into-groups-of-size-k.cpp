class Solution {
public:
    vector<string> divideString(string s, int k, char fill)
    {
        vector<string> Ds;
        int i = 0;
        while (i < s.size())
        {
            string res;
            int j = 0;
            while(j < k && j <s.size()-i)
            {
                res.push_back(s[i+j]);
                j++;
            }
            if (res.size() == k)
                Ds.push_back(res);
            else
                {
                    while (j < k)
                    {
                        res.push_back(fill);
                        j++;
                    }
                    Ds.push_back(res);
                }
            i+=k;
        }
        return (Ds);
        
    }
};