class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int begin = nums[0];
        for(int i = 1;i < nums.size();i++)
        {
            if (nums[i] < begin)
                return (nums[i]);
        }
        return (begin);
        
    }
};