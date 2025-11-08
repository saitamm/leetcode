class Solution(object):
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        cost.append(0)
        dp = [0] * len(cost)
        dp[len(cost)-2] = cost[len(cost)-2]
        dp[len(cost)-3] = cost[len(cost)-3]
        for i in range(len(cost) -4, -1, -1):
            dp[i] = min(cost[i] + dp[i + 1],cost[i]+ dp[i + 2])
            print(dp[i])
        return (min(dp[0], dp[1]))


        