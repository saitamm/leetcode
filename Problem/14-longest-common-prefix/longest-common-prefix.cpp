class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        for(int i = 0;i < strs.size(); i++)
        {
            while (strs[i].find(strs[0]))
                strs[0].pop_back();
        }
        return strs[0];
    }
};