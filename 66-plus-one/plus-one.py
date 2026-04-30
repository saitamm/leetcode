class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        rest = 0
        for i in range(len(digits)-1, -1, -1):
            digits[i] += 1
            if digits[i] >= 10:
                digits[i] = 0
                rest = 1
            else :
                rest = 0
                break
        if rest :
            digits.insert(0, 1)
        print(digits)
        return digits