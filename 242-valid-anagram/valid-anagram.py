class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        mymap1 = {}
        mymap2 = {}
        for i in range(len(s)):
            mymap1[s[i]]  = mymap1.get(s[i], 0) + 1
        for i in range(len(t)):
            mymap2[t[i]] =  mymap2.get(t[i], 0) + 1
        return mymap1 == mymap2        