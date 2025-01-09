class Solution {
public:
    bool isPalindrome(int x)
    {
        long rev;
        int nmbr;
        int digit;

        if (x < 0)
            return (false);
        rev = 0;
        nmbr = x;
        while (x)
        {
            digit = x % 10;
            rev = rev * 10 + digit;
            x = x/10;
        }
        if (nmbr == rev)
            return (true);
        return (false);
    }
};