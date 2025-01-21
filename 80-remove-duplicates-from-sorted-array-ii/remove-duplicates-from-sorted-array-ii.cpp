class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int div =0;
        int count = 1;
        int i = 1;
        for(i = 1;i  <nums.size();i++)
        {
            if (nums[i] != nums[i - 1])
                count = 0;
            nums[i - div] = nums[i];
            printf(">>>%d\n", nums[i - div]);
            printf("****%d\n", count);
            printf("----%d\n", i);
            count++;
            if (count > 2)
                div++;
        }
        return (nums.size() - div);
        
    }
};