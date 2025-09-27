def fibn(memo, n):
        if (memo[n] != 0):
            return (memo[n])
        if(n == 1 or n == 2):
            return (1)
        else :
            result = fibn(memo, n-1) + fibn(memo,  n-2)
        memo[n] = result
        return (result)
class Solution(object):

    def fib(self, n):
        if (n == 0):
            return 0
        arr = [0] * 100
        result = fibn(arr, n)
        return (result)
        