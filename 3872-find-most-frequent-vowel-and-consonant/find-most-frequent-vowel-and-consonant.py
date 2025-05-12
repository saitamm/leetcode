class Solution(object):
    def maxFreqSum(self, s):
        """
        :type s: str
        :rtype: int
        """
        vowel = defaultdict(int)
        consonant = defaultdict(int)
        for i in range(0, len(s)):
            if s[i] in "aeiuo":
                vowel[s[i]]+=1
            else:
                consonant[s[i]]+=1
                print(consonant[s[i]])
        if consonant and vowel:
            return (max(consonant.values())+max(vowel.values()))
        else:
            if (consonant):
                return (max(consonant.values()))
        return(max(vowel.values()))