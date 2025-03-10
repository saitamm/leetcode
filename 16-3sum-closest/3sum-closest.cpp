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
                int sum = nums[i] + nums[left] + nums[right];
                // (this->Energy_point >= 1) ? 1 : this->Energy_point;
                // if (abs(target - sum) <= abs(target - closest))
                //     closest = sum;
                closest = (abs(target - sum) <= abs(target - closest)) ? sum :closest;
                if (sum > target)
                    right--;
                else
                    left++;
            }
        }
        return (closest);     
    }
};