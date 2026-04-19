class Solution(object):
    def carFleet(self, target, position, speed):
        """
        :type target: int
        :type position: List[int]
        :type speed: List[int]
        :rtype: int
        """
        # i have to put it in pairs pair(position, speed)
        # sorted with position 
        # calcul the time
        # start the logic from the last 
        # print the time 
        fleet = len(position)
        pair = []
        for i in range(0, len(position)):
            pair.append([position[i], speed[i]])
        pair.sort()
        start = [pair[len(position)-1][0], pair[len(position)-1][1]]
        for i in range(len(position)-2, -1, -1):
            if (target - start[0]) * pair[i][1] >= (target - pair[i][0]) * start[1]:
                fleet-=1
            else:
                start = [pair[i][0], pair[i][1]]
        return fleet
