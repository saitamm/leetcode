class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int pivot = -1;
        int larger = nums.size() -1;
        int flag = 0;
        for (int right = nums.size() -2;right >=0;right--)
        {
            if (nums[right] < nums[right+1])
            {
                pivot = right;
                while (larger > right)
                {
                    if (nums[right] >= nums[larger])
                        larger--;
                    else
                        break;
                }
                swap(nums[larger], nums[pivot]);
                reverse(nums.begin()+pivot+1, nums.end());
                break;
            }
        }
        if (pivot == -1)
            reverse(nums.begin(), nums.end());
    }
};