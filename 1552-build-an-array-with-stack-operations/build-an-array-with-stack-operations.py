class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        result = []
        j = 0
        for i in range(1, n + 1 ) :
            if j < len(target) and target[j] == i:
                result.append("Push")
                j+=1
            elif j < len(target):
                result.append("Push")
                result.append("Pop")
            else :
                break
        return(result)
