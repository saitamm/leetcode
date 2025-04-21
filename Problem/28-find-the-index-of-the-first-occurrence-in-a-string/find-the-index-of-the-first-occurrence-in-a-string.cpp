class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int i= 0;;
        int j = 0;
        if (needle.size() > haystack.size())
            return (-1);
        while (haystack[i])
        {
            if (haystack[i] == needle[j])
            {
                while (haystack[i + j] == needle[j] && haystack[i + j] && needle[j])
                {
                    j++;
                }
                if (!needle[j])
                    return (i);
                j = 0;
            }
            i++;
        }
        return (-1);
        
    }
};