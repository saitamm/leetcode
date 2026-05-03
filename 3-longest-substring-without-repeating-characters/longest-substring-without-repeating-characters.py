class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s) == 0:
            return 0
        left = 0
        right = 0
        mymap = {}
        length = 0
        while left < len(s):
            while  right < len(s):
                if s[right] in mymap:
                    break
                mymap[s[right]] = 1
                right+=1
            length = max(length, right-left)
            del mymap[s[left]]
            left+=1
        return length

        # "abcabcbb"
        # left = 0 right = 1 