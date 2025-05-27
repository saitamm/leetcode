class Solution {
public:
    int differenceOfSums(int n, int m)
    {
        int num = 0;
        for(int i = 1;i <= n;i++)
        {
            if (i%m)
                num += i;
            else
                num -= i;
        }
        return (num);
        
    }
};