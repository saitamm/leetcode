class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        vector<int> vec;

        for(int i = 0;i < numbers.size();i++)
        {
            // int 
            for(int j = numbers.size() - 1;j >  i ;j--)
            {
                if (numbers[i] + numbers[j] == target)
                {
                    vec.push_back(i+1);
                    vec.push_back(j+1);
                    return (vec);
                }
                else if (numbers[i]+numbers[j] < target)
                    break;
            }
        }
        return(vec);
        
    }
};