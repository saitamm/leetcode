class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        vector<unordered_set<char>> hash_row(9);
        vector<unordered_set<char>> hash_col(9);
        vector<vector<unordered_set<char>>> hash_sub(3, vector<unordered_set<char>>(3));
        int i = 0;
        while (i < 9)
        {
            int j = 0;
            while (j < 9)
            {
            char tmp = board[i][j];
            if (tmp == '.')
            {
                j++;
                continue;
            }
            if (hash_row[i].find(tmp) != hash_row[i].end())
                return (false);
            if (hash_col[j].find(tmp) != hash_col[j].end())
                return (false);
            if (hash_sub[i / 3][j / 3].find(tmp) != hash_sub[i / 3][j / 3].end())
                return (false);
            hash_row[i].insert(tmp);
            hash_col[j].insert(tmp);
            hash_sub[i/3][j/3].insert(tmp);
            j++;
            }
            i++;
        }
        return (true);
    }
};