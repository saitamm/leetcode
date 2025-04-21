class Solution {
public:
    bool isHappy(int n)
    {
        unordered_set<int> unhappy={4,16,37,58,89,145,42,20};
        while(n != 1 && unhappy.find(n) == end(unhappy))
        {
            int sum = 0;
            while (n)
            {
                int digit = n % 10;
                sum = sum + digit * digit;
                n = n / 10;
            }
            n = sum;
        }
        return (n == 1);
        
    }
};