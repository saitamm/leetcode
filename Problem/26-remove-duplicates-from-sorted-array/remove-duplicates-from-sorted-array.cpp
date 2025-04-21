class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        if (nums.empty())
            return (0);
        int j = 1;
        sort(nums.begin(), nums.end());
        for (int i= 1; i < nums.size();i++)
        {
            if (nums[i] != nums[j - 1])
                {
                    nums[j] = nums[i];
                    j++;
                }
        }
        return (j);

    }
};