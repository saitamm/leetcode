class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int left =0;
        int right = 1;
        int sum = 0;
        while (right < prices.size())
        {
            if (prices[right -1] > prices[right])
            {
                sum+= prices[right - 1] - prices[left];
                left = right;
            }
            right++;
        }
        sum+= prices[right - 1] - prices[left];
        return (sum);
    }
};