class Solution(object):
    def tribonacci(self, n):
        """
        :type n: int
        :rtype: int
        """
        T = []
        T.append(0)
        T.append(1)
        T.append(1)
        for i in range(3, n+1):
            T.append(T[i-1]+T[i-2]+T[i-3])
        return T[n]