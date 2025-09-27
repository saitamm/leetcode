class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int left = 0;
        int right = 0;
        int len = INT_MAX;
        int sum = 0;
        while (left <  nums.size())
        {
            while (sum < target && right < nums.size())
            {
                sum += nums[right];
                right++;
            }
            if (sum >= target)
                len = min(len, right -left);
            sum -= nums[left];
            left++;
        }
        if (len == INT_MAX)
            return (0);
        return (len);
    }
};