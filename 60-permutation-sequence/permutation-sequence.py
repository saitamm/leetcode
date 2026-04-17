class Solution(object):
    def getPermutation(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: str
        """
        arr = list(range(1, n + 1))
        result = ""
        while arr :
            idx = (k-1)// (math.factorial(len(arr)-1))
            result += str(arr[idx])
            k = k % math.factorial(len(arr) - 1)
            arr.remove(arr[idx])
        return(result)
