class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        mymap1 = Counter(s)
        mymap2 = Counter(t)
        return mymap1 == mymap2        