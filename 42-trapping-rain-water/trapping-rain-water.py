class Solution(object):
    def trap(self, height):
        maxLeft = [0 for x in range(len(height))]
        maxRight = [0 for x in range(len(height))]
        minLR = [0 for x in range(len(height))]
        L = 0
        R = 0
        sum =  0
        for i in range(0, len(height)):
            maxLeft[i] = L
            maxRight[len(height) -1 -i] = R
            if height[i] > L :
                L = height[i]
            if (height[len(height)-1-i] > R):
                R= height[len(height)-1-i]
        for i in range(0, len(height)):
            if  min(maxLeft[i], maxRight[i]) - height[i] > 0 :
                minLR[i] = min(maxLeft[i], maxRight[i]) - height[i]
            else :
                minLR[i] = 0
            sum += minLR[i]
        return(sum)
        """
        :type height: List[int]
        :rtype: int
        """
        