class Solution {
public:
    int jump(vector<int>& nums)
    {
        int step = 0;
        int end =0;
        int m = 0;
       for(int left =0; left < nums.size()-1;left++)
        {
            m = max(m, nums[left]+left);
            if (left >= end)
            {
                step++;
                end = m;
            }
        }
        return (step);
    }
};
