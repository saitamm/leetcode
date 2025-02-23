class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        set<vector<int>> reslt;
        unordered_map<int, int> map;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < nums.size();i++)
            map[nums[i]] = i;
        for(int i = 0; i<nums.size() -1;i++)
        {
            int j = i+1;
            while (j < nums.size())
            {
                int k = -nums[i] - nums[j];
                if (map[k] > i  && map[k] > j)
                {
                    vector<int> target = {nums[i], nums[j], nums[map[-nums[i] - nums[j]]]};
                    reslt.insert(target);
                }
                j++;
            }
        }  
        vector<vector<int>> res(reslt.begin(), reslt.end());
        return (res);      
    }
};