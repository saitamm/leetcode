class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        # [0, 1, 0, 3, 12]
        # [1, 0, 0, 3, 12]
        # [1, 0, 1]
        # []
        left = 0
        right = left+1
        while left <  len(nums) and right < len(nums):
            print("---",nums[left], "***", nums[right])
            if nums[left] == 0 and nums[right] != 0:
                nums[left] = nums[right]
                nums[right] = 0
                left+=1
            if nums[left] != 0:
                left += 1
                right = left +1
            elif nums[right] == 0:
                right +=1
            
