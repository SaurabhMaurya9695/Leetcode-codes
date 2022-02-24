class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int col=matrix[0].size();
        int i=0;
        int j=col-1;
        // start from last element of the first row
        while(i<rows and j>=0)
        {
            if(matrix[i][j]==target) return true; // if found return true
            if(matrix[i][j]>target) j--;// if target is smaller reduce j(comes to left)
            else if(matrix[i][j]<target) i++; // else go downWards(for greater elements)
        }
        return false;
    }
};