class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        int a = nums.size();
        vector<int> res;
        // sort(nums.begin(), nums.end());
        for (int i = 0; i < a; i++)
            nums[abs(nums[i]) - 1] = (-1) * abs(nums[abs(nums[i]) - 1]);
        int i = 0;
        while (i < a)
        {
            if (nums[i] > 0)
                res.push_back(i+ 1);
          i++;
        }
        return (res);
        
    }
};
