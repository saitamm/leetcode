class Solution {
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return (false);
        int y = x;
        long nmbr = 0;
        while (x)
        {
            nmbr  = nmbr * 10 + x % 10;
            x =  x/ 10;
        }
        return (y == nmbr);
    }
};