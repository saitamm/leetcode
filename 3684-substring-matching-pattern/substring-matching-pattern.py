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
        print("first = ", first)
        second = p[pos+1:]
        print("second = ", second)
        firstsub = s.find(first)
        result1 = s[firstsub+len(first):]
        print("****** = ", firstsub)
        final = result1.find(second)
        print("-------------", final)
        return firstsub != -1 and final != -1