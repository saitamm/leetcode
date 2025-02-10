class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector<vector<string>> result;
        vector<string> copy_strs = strs;
        // cout << 
        if (copy_strs.size() == 1)
            {
                result.push_back(strs);
                return (result);
            }
        for(int i = 0;i < strs.size();i++)
            sort(strs[i].begin(), strs[i].end());
        unordered_map <string, vector<int>> hash_map;
        for(int i = 0;i < strs.size();i++)
        {
            if (hash_map.find(strs[i]) != hash_map.end())
            {
                hash_map[strs[i]].push_back(i);
            }
            else
            {
                hash_map[strs[i]].push_back(i);
            }
        }
        int i = 0;
        result.resize(hash_map.size());
        int k = 0;
        while (i < strs.size())
        {
            int j = 0;
            if ( hash_map[strs[i]][j] != -1)
            {
            while (j < hash_map[strs[i]].size() )
            {
                int index = hash_map[strs[i]][j];
                cout << "::::" << copy_strs[index] << endl; ;
                result[k].push_back(copy_strs[index]);
                hash_map[strs[i]][j] = -1;
                j++;
            }
            k++;
            }
            i++;
        }
        return (result);
    }
};