class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        if (nums.size() == 1)
            return (nums[0]);
        sort(nums.begin(), nums.end());
        int i = 0;
        for(i; i < nums.size(); i++)
        {
            if (i % 2 == 1)
            {
                if (nums[i] != nums[i - 1])
                    return (nums[i - 1]);
            }
        }
        if (nums.size() % 2)
            return (nums[i - 1]);
        return 0;
    }
};