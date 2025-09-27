class Solution {
public:
    string minWindow(string s, string t)
    {
        int left = 0;
        int right = 0;
        unordered_map<char, int> need;
        unordered_map<char, int> window;
        string res;
        int m =INT_MAX;
        int have = 0;
        int start = 0;
        for(int i = 0;i <t.size();i++)
        {
            if (need[t[i]] > 0)
                have++;
            need[t[i]]++;
        }
        while (left < s.size())
        {
            while(right < s.size()&& have < t.size())
            {
                window[s[right]]++;
                if (window[s[right]] == need[s[right]])
                    have++;
                right++;
            }
            if (right - left < m && have == t.size())
            {
                m = right - left;
                start = left;
            }
            if (window[s[left]] > need[s[left]])
                window[s[left]]--;
            else if (window[s[left]] == need[s[left]])
            {
                window[s[left]]--;
                have--;
            }
            left++;
        }
        if (m < INT_MAX)
            res = s.substr(start, m);
        return (res);
    }
};