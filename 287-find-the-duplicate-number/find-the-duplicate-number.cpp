class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        unordered_map <int, int> hash;
        int size = nums.size();

        for(int i= 0;i< size;i++)
            hash[i] = 0;
        for(int i = 0;i<size;i++)
        {
            hash[nums[i]]++;
            if (hash[nums[i]] > 1)
                return (nums[i]);
        }
        return (-1);
    }
};