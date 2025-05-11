class Solution(object):
    def threeConsecutiveOdds(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        for i in range(0, len(arr)):
            if arr[i] % 2 != 0:
                odd = 0 
                for j in range(i, len(arr)):
                    if (arr[j] %2 != 0):
                        odd+=1
                        i = j
                    else:
                        break
                if (odd >= 3):
                    return (True)
        return (False)
        