class Solution(object):
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        dp = cost[:]
        for i in range(len(cost) -3, -1, -1):
            dp[i] = min(cost[i] + dp[i + 1],cost[i]+ dp[i + 2])
        return (min(dp[0], dp[1]))


        