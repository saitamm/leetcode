class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int size = nums.size();
        unordered_map <int, int> hash(size);
        for(int i = 0;i<size;i++)
        {
            hash[nums[i]]++;
            if (hash[nums[i]] > 1)
                return (nums[i]);
        }
        return (-1);
    }
};