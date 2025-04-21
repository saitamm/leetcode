class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        set<vector<int>> st;
        sort(nums.begin(), nums.end());
        int left = 0;
        int size = nums.size();
        int right = size - 1;
        if (size < 4 || (size == 0 && (long long)nums[0] + nums[1]+nums[2]+nums[3] != (long long)target))
        {
            vector<vector<int>> res(st.begin(), st.end());
            return(res);
        }
        // long long sum_i  = (long long)nums[0] + nums[1]+nums[2]+nums[3];
        // if (size == 4 &&(int)sum_i != target )
        // {
        //     vector<vector<int>> res(st.begin(), st.end());
        //     return(res);
        // }
        while (left < size)
        {
            right = size -1;
        while (right >= left)
        {
                int i = left +1;
                int j = right -1;
                while (i < j && i < size && j >= 0)
                {
                   long long sum = (long long) nums[left]+nums[right]+nums[i]+nums[j];
                    if ( sum == (long long)target)
                    {
                        st.insert({nums[left], nums[i], nums[j], nums[right]});
                        i++;
                    }
                    else if (sum > target)
                        j--;
                    else
                        i++;

                }
            right--;
        }
        left++;
        }
        vector<vector<int>> res(st.begin(), st.end());
        return (res);
    }
};