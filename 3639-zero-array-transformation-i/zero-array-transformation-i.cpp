class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) 
    {
        vector<int> diff(nums.size()+2);
        for(int i = 0;i <queries.size();i++)
        {
            int l = queries[i][0];
            int r = queries[i][1];
            diff[l] += 1;
            diff[r + 1] -= 1;
        }
        for(int i = 1;i <= nums.size();i++)
        {
            diff[i]+=diff[i-1];
            if (diff[i-1] < nums[i-1])
                return (false);

        }
        // for(int i = 0;i <nums.size();i++)
        // {
        //     if (diff[i] < nums[i])
        //         return (false);
        // }
        return true;
    }
};