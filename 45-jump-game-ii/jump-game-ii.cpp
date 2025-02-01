class Solution {
public:
    int jump(vector<int>& nums)
    {
        int step = 0;
        int cur_end =0;
        int farthest = 0;
       for(int left =0; left < nums.size()-1;left++)
        {
            farthest = max(farthest, nums[left]+left);
            if (left >= cur_end)
            {
                step++;
                cur_end = farthest;
            }
        }
        return (step);
    }
};