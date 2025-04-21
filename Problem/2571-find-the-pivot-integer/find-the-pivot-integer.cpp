class Solution {
public:
    int pivotInteger(int n)
    {
        int prefix = 0;
        int suffix = n;
        if (n == 1)
            return (1);
        int j = 1;
        int k = 1;
        for (int i = 1;i < n;i++)
        {
            while (prefix < suffix && j <= n)
                {
                    prefix += j;
                    j++;
                }
            if (prefix == suffix && k + j == n)
                return (j);
            while (suffix <= prefix && k <= n)
            {
                suffix += n - k;
                k++;
            }
        }
        return (-1);
        
    }
};