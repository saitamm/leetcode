class Solution(object):
    def getPermutation(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: str
        """
        arr = list(range(1, n + 1))
        perms = list(itertools.permutations(arr))
        result = ""
        for i in range(0, len(perms[k-1])):
            result += str(perms[k-1][i])
        return result