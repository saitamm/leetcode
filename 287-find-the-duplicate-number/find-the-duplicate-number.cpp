class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        unordered_map <int, int> hash;
        int size = nums.size();
        for(int i = 0;i<=size/2;i++)
        {
            hash[nums[i]]++;
            hash[nums[size-i-1]]++;
            if (hash[nums[i]] > 1)
                return (nums[i]);
            else if (hash[nums[size-i-1]] >1)
                return (nums[size -i-1]);
        }
        return (-1);
    }
};