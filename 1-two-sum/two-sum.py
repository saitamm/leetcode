class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        mymap = {}
        for i in range(len(nums)):
            if target - nums[i] in mymap:
                return [i, mymap[target-nums[i]]]
            mymap[nums[i]] =  i
        return [-1, -1]
