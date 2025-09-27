class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int size = nums.size();
        vector<int> prefix(size);
        vector<int> suffix(size);
        vector<int> product(size);
        prefix[0] = 1;
        suffix[size -1] = 1;
        for(int i = 1;i < size ;i++)
        {
            prefix[i] = prefix[i-1]*nums[i-1];
            suffix[size - i - 1] = suffix[size - i] * nums[size-i];
        }
        for(int i = 0;i < size; i++)
            product[i] = suffix[i] * prefix[i];
        return (product);
    }
};