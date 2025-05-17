class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int left=0;
        int right=0;
        while (left<nums.size())
        {
            right= nums.size()-1;
            while (right > left)
            {
                if (nums[left] > nums[right])
                    swap(nums[left], nums[right]);
                right--;
            }
            left++;
        }
        
    }
};