class Solution(object):
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        dp = cost[:]
        for i in range(len(cost) -3, -1, -1):
            c = dp[i]
            dp[i] = min(c + dp[i + 1],c+ dp[i + 2])
        return (min(dp[0], dp[1]))


        