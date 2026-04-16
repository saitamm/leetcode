class Solution(object):
    def maxSlidingWindow(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        result = []
        queue = deque()
        for i in range(0, k):
            while  queue and queue[-1] < nums[i]:
                queue.pop()
            queue.append(nums[i])
        maximum = queue[0]
        result.append(maximum)
        for i in range(1, len(nums)-k+1):
            if nums[i-1] == maximum:
                queue.popleft()
            while  queue and queue[-1] < nums[i+k-1]:
                queue.pop()
            queue.append(nums[i+k-1])
            maximum = queue[0]
            result.append(queue[0])
        return result
        