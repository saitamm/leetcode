class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        set<vector<int>> reslt;
        sort(nums.begin(),nums.end());
        for(int i =0;i < nums.size() - 1;i++)
        {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int left = i + 1;
            int right = nums.size()-1;
            while (left != right)
            {
                if (nums[left] + nums[right] == - nums[i])
                {
                    reslt.insert({nums[i], nums[left], nums[right]});
                    left++;
                }
                else if (nums[left] + nums[right] < -nums[i])
                    left++;
                else
                    right--;
            }
        }
        vector<vector<int>> res(reslt.begin(), reslt.end());
        return (res);      
    }
};