
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    
    bool solve(vector<vector<char>>& board){
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){   //iterate over the matrix 
                if(board[i][j] == '.'){ // where i got space  check for filling char //
                    for(char c = '1'; c <= '9'; c++){   // fill the char 
                        if(isValid(board, i, j, c)){  // check for the char we filled that are valid or not
                            board[i][j] = c; // if it is valid then fill the char .
                            
                            if(solve(board)) // again call recusrion
                                return true; 
                            else
                                board[i][j] = '.';  // if not selecteed then remove /
                        }
                    }
                    
                    return false;
                }
            }
        }
        return true;
    }
    
    // check for all three condition 
    bool isValid(vector<vector<char>>& board, int row, int col, char c){
        for(int i = 0; i < 9; i++) {
            if(board[i][col] == c) 
                return false; 
            
            if(board[row][i] == c) 
                return false; 
            
            if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) 
                return false; 
        }
        return true;
    }
};