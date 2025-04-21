class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int right = 1;
        int left = 0;
        while (right < prices.size())
        {
            if (prices[right] - prices[left] > max)
                max = prices[right] - prices[left];
            if (prices[right] < prices[left])
                    left = right;
            right++;
        }
        return (max);
    }
};