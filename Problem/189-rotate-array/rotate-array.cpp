class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        if (nums.empty() || nums.size() == 1)
            return ;
        vector<int> d(nums);
        int l = d.size() - k;
        if (l < 0 && k % 2 == 0)
        {
            if (k % nums.size())
            {

                rotate(nums, k % nums.size());
            }

            return ;
        }
        else if (l < 0 && k % 2)
        {
            rotate(nums, k % nums.size());
            return ;
        }
        int i = 0;
        for(i;l < d.size(); i++)
        {
            nums[i] = d[l];
            l++;
        }
        int j = 0;
        while (j < d.size() - k)
        {
            nums[i] = d[j] ;
            j++;
            i++;
        }
    }
};