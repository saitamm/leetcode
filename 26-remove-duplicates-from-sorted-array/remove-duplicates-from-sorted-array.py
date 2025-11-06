class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        iter = 1
        index = 1
        while (iter < len(nums)):
            if (nums[index-1] != nums[iter]):
                nums[index] = nums[iter]
                index +=1
            iter+=1
        return (index)
        