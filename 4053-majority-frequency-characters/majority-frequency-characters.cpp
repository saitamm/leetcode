class Solution {
public:
    string majorityFrequencyGroup(string s) 
    {
        unordered_map<int, string> Freq;
        int maxSize = 0;
        sort(s.begin(), s.end());
        for(int i = 0;i< s.size();)
            {
                int j = i;
                for(j = i;j < s.size() && s[j] == s[i];j++){}
                Freq[j-i].push_back(s[i]);
                if (Freq[j - i].size() > Freq[maxSize].size())
                        maxSize = j - i;
                else if (Freq[j - i].size() == Freq[maxSize].size() && j -i > maxSize)
                        maxSize = j- i;
                i = j;
            }
        return (Freq[maxSize]);
    }
};