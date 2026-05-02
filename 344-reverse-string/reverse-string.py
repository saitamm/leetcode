class Solution(object):
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        left = 0
        right =len(s)-1

        while right > left :
            tmp = s[right]
            s[right] = s[left]
            s[left] = tmp
            left += 1
            right -= 1
