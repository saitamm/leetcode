class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = 0;
        int length = 0;
        while (right < nums.size())
        {
            if (nums[right] -nums[left] == 1)
                length = max(length, right -left+1);
            if (nums[right] -nums[left] > 1)
                left++;
            else
                right++;
        }
        return (length);
        
    }
};