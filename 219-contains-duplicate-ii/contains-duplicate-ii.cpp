class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        unordered_map<int , int > hash_tab;
        int i = 0;
        while (i < nums.size())
        {
            if (hash_tab.find(nums[i]) != hash_tab.end() && abs(hash_tab[nums[i]] - i) <= k)
                return true;
            hash_tab[nums[i]] = i;
            i++;
        }
        return (false);
    }
};