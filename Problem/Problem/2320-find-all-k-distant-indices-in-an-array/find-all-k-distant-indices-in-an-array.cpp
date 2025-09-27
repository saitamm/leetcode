class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k)
    {
        vector<int> result;
        unordered_map<int,int> hash;
        // for(int i = 0;i < nums.size();i++)
        // {
        //     if (nums[i] == key)
        //         index.push_back(i);
        // }
        for(int i = 0;i < nums.size();i++)
        {
            if (nums[i] == key)
            {

            int start = std::max(0, i - k);
            int end = std::min((int)nums.size() - 1, i + k);
            while (start <= end)
            {
                int in = abs(start - i);
                if (in <= k  && !hash[start])
                {
                    result.push_back(start);
                    hash[start]++;
                }
                start++;
            }
            }
            }
            
        return (result);
    }
};