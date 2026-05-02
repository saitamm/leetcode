class Solution(object):
    def findDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        mymap = {}
        for i in range(len(nums)):
            if nums[i] in mymap :
                return nums[i]
            mymap[nums[i]] = 1
        return -1
        