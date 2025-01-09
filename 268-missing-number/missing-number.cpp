class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int i = 0;
        int target = nums[0];
        while (target <= nums.size())
        {
            int flag = -1;
            int left = 0;
            int right = nums.size() - 1;

            while (left <= right) {
                int mid = left + (right - left) / 2;

                 if (nums[mid] == target) {
                flag = 0;
                break;
                 } else if (nums[mid] < target) {
                left = mid + 1;
                 } else {
                 right = mid - 1;
                 }
            }
            if (flag == -1)
                return (target);
            target++;
        }
        return (0);
        
    }
};