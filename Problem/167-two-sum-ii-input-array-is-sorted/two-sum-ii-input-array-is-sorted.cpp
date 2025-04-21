class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        vector<int> vec;
        int j = numbers.size() -1;
        int i = 0;
        while (i < numbers.size() -1)
        {
                if (numbers[i]+numbers[j] < target)
                    i++;
                else if (numbers[i] + numbers[j] == target)
                {
                    vec.push_back(i+1);
                    vec.push_back(j+1);
                    return (vec);
                }
                else
                    j--;
        }
        return(vec);
        
    }
};