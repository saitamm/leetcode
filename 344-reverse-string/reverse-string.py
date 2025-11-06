class Solution(object):
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        right = len(s) -1
        left = 0
        while (left < right):
            c = s[left]
            s[left] = s[right]
            s[right] = c
            left += 1
            right -= 1 
        