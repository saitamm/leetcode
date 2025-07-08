class Solution(object):
    def findLucky(self, arr):
        freq = Counter(arr)
        m = -1
        print(max(arr))
        for i in range(1, max(arr)+1):
            if i == freq[i] and freq[i] > m :
                m = freq[i]
        return m
        """
        :type arr: List[int]
        :rtype: int
        """
        