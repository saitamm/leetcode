class Solution(object):
    def coinChange(self, coins, amount):
        """
        :type coins: List[int]
        :type amount: int
        :rtype: int
        """
        ways = [float("inf")] * (amount+1)
        ways[0] = 0
        for i in range(len(coins)):
            for j in range(amount+1):
                if coins[i] <= j:
                    ways[j] = min(ways[j - coins[i]]+1, ways[j])
        print(ways[amount])
        return ways[amount] if ways[amount] != float('inf') else -1




