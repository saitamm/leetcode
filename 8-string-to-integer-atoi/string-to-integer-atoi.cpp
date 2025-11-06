class Solution {
public:
    int myAtoi(string s) 
    {
        long result=0;
        int sign=1;
        int i=0;
        while(isspace(s[i]))
            i++;

        if (s[i] == '-')
            {
                sign = -1;
                i++;
            }
        else if (s[i] == '+')
            i++;
          while (isdigit(s[i]))
        {
            result= result*10 +s[i] -48;
            i++;
            if (result*sign > 2147483647)
                return (2147483647);
            if (result*sign <= -2147483648)
                return (-2147483648);
        }
        return (sign*result);

    }
};