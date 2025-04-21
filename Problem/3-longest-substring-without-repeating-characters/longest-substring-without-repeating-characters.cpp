class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int left =0;
        int right =0;
        int length = 0;
        unordered_map <int,int> hash;
        while (left < s.size())
        {
            while (hash[s[right]] != 1 && right < s.size())
            {
                hash[s[right]]++;
                right++;
            }
            length = max(length, right - left);
            hash[s[left]] = 0;
            left++;
        }
        return (length);

    }
};