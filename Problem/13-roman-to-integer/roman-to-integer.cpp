class Solution {
public:
    int romanToInt(string s)
    {
        int i=0;
        int sum=0;
        int value[256];
        value['I'] = 1, value['V'] = 5, value['X'] = 10;
        value['L'] = 50, value['C'] = 100;
        value['D'] = 500, value['M'] = 1000;
        while(s[i])
        {
            if (s[i+1] && value[s[i]] < value[s[i+1]])
                {
                    sum = sum + value[s[i+1]] - value[s[i]];
                    i++;
                }
                else
                    sum = sum + value[s[i]];
                i++;
        }
        return (sum);
    }
};