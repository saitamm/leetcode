class Solution(object):
    def lengthOfLIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        dp = [0] * len(nums)       
        dp[len(nums) -1] = 1
        for i in range(len(nums)-2, -1, -1):
            length = 1
            for j in range(i , len(nums)):
                if nums[i] < nums[j] :
                    length = max(length, 1 + dp[j])
            dp[i] = length
        return max(dp)