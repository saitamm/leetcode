class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        fb  = []
        fb.append(0)
        fb.append(1)
        for i in range(2, n+1):
            fb.append(fb[i-2] + fb[i-1])
        return fb[n]