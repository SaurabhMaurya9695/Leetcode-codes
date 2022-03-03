class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sumPD = 0, sumSD = 0, m = mat.size()/2;
        
        for(int i=0; i<mat.size(); i++){
            sumPD += mat[i][i];
            sumSD += mat[i][mat.size() - 1 - i];
        }

        return mat.size() % 2 != 0 ? sumPD + sumSD - mat[m][m] : sumPD + sumSD;
    }
};