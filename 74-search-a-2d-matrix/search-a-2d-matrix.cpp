class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        for(int row = 0;row < matrix.size();row++)
        {
            int last = matrix[row].size();
            if (matrix[row][last -1] >= target)
            {
                int left = 0;
                int right = matrix[row].size();
                int mid = left + (right - left)/2;
                while (left <= right)
                {
                    mid = left + (right - left)/2;
                    if ( mid < matrix[row].size() && matrix[row][mid] == target)
                        return true;

                    if (mid < matrix[row].size() && matrix[row][mid] < target)
                        left = mid + 1;

                    else
                        right = mid - 1;
                }
            }

        }
        return (false);
        
    }
};