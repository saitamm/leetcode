class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
        int i = 0;
        vector<string> res;
        while (i<nums.size())
        {
            long first = nums[i];
            string sub;
            sub+=to_string(first);
            int last=0;
            i++;
            first++;
            while (i<nums.size() && first == nums[i] )
            {
                last = 1;
                i++;
                first++;
            }
            if (last != 0)
            {
                sub+="->";
                sub+=to_string(first -1);
            }
            res.push_back(sub);

        }

        return(res);
    }
};