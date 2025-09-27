class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k)
    {
        int left = 0;
        int right = 0;
        double sum = 0;
        double  m = INT_MIN;

        while (left + k - 1 < nums.size())
        {
            while (right - left < k && right < nums.size())
            {
                sum += (double) nums[right];
                right++;
            }
            m = max(sum, m);
            sum -= nums[left];
            left++;
        }
        return (m / k);
    }
};