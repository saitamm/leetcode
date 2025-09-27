class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int left = 0;
        int right = 0;
        unordered_map<char, int> count;
        int windowlen = 0;
        int result = 0;
        count[s[right]]++;
        while (right < s.size())
        {
            windowlen = right - left +1;
            int mF = 0;
            for (const auto& it : count)
            {
                if (it.second > mF)
                    mF = it.second;
            }
            if (windowlen - mF <= k)
            {
                result = max(result, windowlen);
                right++;
                count[s[right]]++;
            }
            else
            {
                count[s[left]]--;
                left++;
            }
        }
        return(result);
        
    }
};