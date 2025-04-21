class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        vector<vector<int>> d(matrix);
        int s = matrix[0].size() - 1;
        int j = 0;
        int s_d = 0;
        while (s >= 0)
        {
            j = 0;
            while (j < matrix[0].size())
            {
                matrix[j][s] = d[s_d][j];
                j++;
            }
            s_d++;
            s--;
        }
    }
};