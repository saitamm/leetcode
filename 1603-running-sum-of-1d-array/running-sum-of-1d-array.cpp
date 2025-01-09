class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int> a(nums.size());
        a[0] = nums[0];
        for(int i = 1;i < nums.size(); i++)
        {
            a[i] = nums[i] + a[i-1];
        }    
        return (a);
    }
};
