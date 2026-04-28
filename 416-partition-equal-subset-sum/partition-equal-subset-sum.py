class Solution:
   def canPartition(self, nums: list[int]) -> bool:
        total_sum = sum(nums)
        if total_sum % 2 != 0:
            return False
        target = total_sum // 2
        @lru_cache(None)
        def dfs(i: int, target: int) -> bool:
            # base cases
            if target == 0:
                return True
            if i >= len(nums) or target < 0:
                return False
            # recursive exploration
            return dfs(i + 1, target - nums[i]) or dfs(i + 1, target)

        return dfs(0, target)