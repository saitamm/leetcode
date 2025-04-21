class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = 0;
    vector<int> sp;
    int left = 0;
    int up = 0;
    int right = matrix[0].size() - 1;
    int down = matrix.size() - 1;
    
    while (m < matrix.size() * matrix[0].size()) {
        if (up <= down) {
            for (int i = left; i <= right; i++) {
                sp.push_back(matrix[up][i]);
                m++;
            }
            up++;
        }
        
        if (left <= right) {
            for (int j = up; j <= down; j++) {
                sp.push_back(matrix[j][right]);
                m++;
            }
            right--;
        }
        
        if (up <= down) {
            for (int i = right; i >= left; i--) {
                sp.push_back(matrix[down][i]);
                m++;
            }
            down--;
        }
        
        if (left <= right) {
            for (int j = down; j >= up; j--) {
                sp.push_back(matrix[j][left]);
                m++;
            }
            left++;
        }
    }
    
    return sp;
}
}; 