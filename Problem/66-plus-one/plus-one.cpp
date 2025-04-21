class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        vector <int> d;
        int flag = 1;
        int i = digits.size() - 1;
        while (i >= 0)
        {
            if (flag == 0)
                break;
            digits[i]++;
            if (digits[i] == 10)
            {
                digits[i] = 0;
                flag = 1;
            }
            else
                flag = 0;
            i--;
        }
        if (flag)
            d.push_back(1);
         i = 0;
        while (i < digits.size())
            {
                d.push_back(digits[i]);
                i++;
            }
        return (d);
    }
};