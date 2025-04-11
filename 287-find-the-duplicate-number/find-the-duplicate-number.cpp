class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int size = nums.size();
        vector<int> visited(size);
        for(int i = 0;i<size;i++)
        {
            visited[nums[i]]++;
            if (visited[nums[i]] > 1)
                return (nums[i]);
        }
        return (-1);
    }
};