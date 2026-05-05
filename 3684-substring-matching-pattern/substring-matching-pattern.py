class Solution(object):
    def hasMatch(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: bool
        """
        # leetcode ee*e 
        if len(p) == 1:
            return True
        pos = p.find('*')
        first  = p[:pos]
        second = p[pos+1:]
        firstsub = s.find(first)
        result1 = s[firstsub+len(first):]
        final = result1.find(second)
        return firstsub != -1 and final != -1