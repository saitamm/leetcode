class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        int left = 0;
        int size  = nums.size();
        int right  = size -1;
        sort(nums.begin(), nums.end());
        int closest = -98745;
        for(int i = 0;i < size-1;i++)
        {
            left = i + 1;
            right = size - 1;
            while (left != right)
            {
                int s1 = nums[i];
                int s2 = nums[left];
                int s3 = nums[right];
                // int sum = nums[i] + nums[left] + nums[right];
                int sum = s1+s2+s3;
                if (abs(target - sum) <= abs(target - closest))
                    closest = sum;
                if (sum > target)
                    right--;
                else
                    left++;
            }
        }
        return (closest);     
    }
};