class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                q.push({i, j});
            }
        }
    }

        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for (int k = 0; k < m; k++) {
                matrix[row][k] = 0;
            }
            for (int k = 0; k < n; k++) {
                matrix[k][col] = 0;
            }
        }
    }
    
    
};