class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        if (nums.size() == 1)
            return (nums[0]);
        unordered_map <int, int> hash_map;
        sort(nums.begin(), nums.end());
        int i = 0;
        while (i < nums.size())
        {
            if (hash_map.find(nums[i]) != hash_map.end())
            {
                hash_map[nums[i]]++;
                if (hash_map[nums[i]] > nums.size()/2)
                    return (nums[i]);
            }
            else
                hash_map.insert({nums[i], 1});
            i++;
        }
        return (-1);
    }
};