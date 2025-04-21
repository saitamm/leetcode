class Solution {
public:
    bool canJump(vector<int>& nums)
    {
        int right = nums.size() -1;
        int left = right - 1;
        while (left >= 0)
        {
            if (nums[left] >= right - left)
                right = left;
            left--;
        }
        return(right == 0);
    }
};