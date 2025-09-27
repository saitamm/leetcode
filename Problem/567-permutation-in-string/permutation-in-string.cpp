class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        int left = 0;
        int right = 0;
        unordered_map<char, int> Hash;
        for(int i = 0;i < s1.size();i++)
            Hash[s1[i]]++;
        while (left < s2.size())
        {
            if (Hash[s2[left]])
            {
                right = left;
                while (right < s2.size() && Hash[s2[right]])
                {
                    Hash[s2[right]]--;
                    right++;
                }
                if (right -left== s1.size())
                    return (true);
                for(int i = left;i < right;i++)
                    Hash[s2[i]]++;
            }
            left++;
        }
        return(false);
    }
};