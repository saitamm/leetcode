class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        map<int, int> hash;
        vector<int> result;

        for(int i = 0;i < nums.size();i++)
            hash[nums[i]]++;
        vector<vector<int>> count(nums.size()+1);
        for(auto it : hash)
            count[it.second].push_back(it.first);
        for(int i = count.size()-1 ;i > 0;i--)
        {
            cout << i<<endl;
            if (count[i].size() > 0)
            {
                for(int j = 0;j < count[i].size() && k > 0;j++)
                {
                    result.push_back(count[i][j]);
                    k--;
                }
            }
        }
        return (result);
        
    }
};