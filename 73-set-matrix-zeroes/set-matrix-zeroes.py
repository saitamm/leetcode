class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        mp = {}
        for i in range(len(matrix)):
            mp[i] = matrix[i][:]
        for col in range(len(matrix)):
            for line in range(len(matrix[0])):
                if mp[col][line] == 0:
                    for i in range(len(matrix[0])):
                        matrix[col][i] = 0
                    for j in range(len(matrix)):
                        matrix[j][line] = 0

