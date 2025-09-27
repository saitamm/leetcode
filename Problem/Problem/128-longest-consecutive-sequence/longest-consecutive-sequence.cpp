class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        unordered_set<int> hashSet;
        for (int i = 0; i < nums.size(); i++)
            hashSet.insert(nums[i]);
        int length =0;
        for (int num : hashSet)
        {
            int m = num;
            if (hashSet.find(m-1) == hashSet.end())
            {
                while(hashSet.find(m) != hashSet.end())
                    m++;
                length = max(length, m-num);
            }
        }
        return (length);
    }
};