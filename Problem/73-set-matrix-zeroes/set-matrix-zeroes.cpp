class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        unordered_map <int ,vector<int>> map;
        for(int i = 0;i <matrix.size();i++)
            map[i] = matrix[i];
        for(int col = 0;col < matrix.size();col++)
        {
            for(int line = 0;line < matrix[0].size();line++)
            {
                if (map[col][line] == 0)
                {
                    for(int i = 0;i < matrix[0].size();i++)
                        matrix[col][i] = 0;
                    for(int j = 0;j < matrix.size();j++)
                        matrix[j][line] = 0;
                }
            }
        }
        
    }
};