class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        dp = []
        dp.append(nums[0])
        for i in range(1, len(nums)):
            dp.append(max(nums[i], nums[i]+dp[i-1]))
        return max(dp)