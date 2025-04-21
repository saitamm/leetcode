class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_set<int> hash_set(nums1.begin(), nums1.end());
        vector<int> d;

        for (int num : nums2)
        {
            if (hash_set.find(num) != hash_set.end())
            {
                d.push_back(num);
                hash_set.erase(num);
            }
        }
        return (d);   
    }
};