class Solution {
public:
    void gameOfLife(vector<vector<int>>& board)
    {
        vector<vector<int>> copy(board);

        for (int i = 0; i < board.size(); i++) 
        {
            int up = i - 1;
            if (up < 0) up = 0;

            for (int j = 0; j < board[i].size(); j++) {
                int left = j - 1;
                if (left < 0) left = 0;
        
                int live = 0;
                int died = 0;
                int row = up;
                while (row <= i + 1 && row < board.size()) {
                int col = left;
                while (col <= j + 1 && col < board[i].size()) {
                    if (!(row == i && col == j)) {
                        if (copy[row][col] == 1) live++;
                        else died++;}
                    col++;}
                    row++;}
                if (copy[i][j] == 1) {
                if (live < 2 || live > 3) board[i][j] = 0;} 
                else {
                    if (live == 3) board[i][j] = 1;
                }
            }
        }       
    }
};