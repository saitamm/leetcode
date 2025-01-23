class Solution {
public:
    int candy(vector<int>& ratings)
    {
        int min = 0;
        vector<int> vector;
        for(int i = 0;i < ratings.size();i++)
            vector.push_back(1);
        for(int i = 0;i < ratings.size() -1;i++)
        {
            if (ratings[i] < ratings[i+1])
                vector[i+1] = vector[i] + 1;
        }
        for(int i = ratings.size() - 2; i >= 0;i--)
        {
            if (ratings[i] > ratings[i+1])
                vector[i] += vector[i+1] - vector[i] + 1;
            else if (vector[i+1] <= vector[i] && ratings[i] != ratings[i+1])
                vector[i+1] = vector[i] + 1; 
        }
        for(int i = 0;i < ratings.size();i++)
            min +=vector[i]; 
        return (min);
    }
};