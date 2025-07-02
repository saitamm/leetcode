class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        for(int i = 1;i< nums.size();i++)
        {
            if (nums[i] < nums[0])
                return (nums[i]);
        }
        return (nums[0]);
        
    }
};