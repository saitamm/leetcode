class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int left = 0;
        int right = nums.size();
        int mid = left + (right - left)/2;
        while (left <= right)
        {
            mid = left + (right - left)/2;
        if ( mid < nums.size() && nums[mid] == target)
            return mid;

        if (mid < nums.size() && nums[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
        }
        return (-1);
    }
};