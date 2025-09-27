class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        matrix = []
        matrix.append([1])
        if (numRows > 1):
            matrix.append([1,1])
        for i in range(2, numRows):
            row = []
            row.append(1)
            for m in range(1, i):
                row.append(matrix[i-1][m-1]+matrix[i-1][m])
            row.append(1)
            matrix.append(row)
            print(matrix[i])
        return (matrix)