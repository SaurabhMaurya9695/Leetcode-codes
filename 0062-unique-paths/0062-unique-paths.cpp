    //path is for 3 * 3
    // r . . 
    // . . .
    // . . d
    // we have to go from r to d 
    // rrdd
    // ddrr
    // rddr
    // rdrd
    // drrd
    // drdr  // so for n rows and n colums => 

class Solution {
public:
    int uniquePaths(int m, int n) {
        // for 2 * 3 -> paths are ;
        // r r d , d r r , r d r  
        // now you observe for each every m no of coloum -> you have to go (m - 1) times right ;
        // and for every row -> you have to go (n - 1) dowm ;
        // (m - 1) + (n - 1) = > (m + n - 2) ;
        // you need to fill in 3 boxex out of 2 right or 1 left ;
        // (m + n - 2) C (n - 1) or (m + n - 2) C (m - 1) 
        int N = m + n - 2;
        int r = m - 1 ;
        double res = 1 ;
        // nCr = n * (n - 1) * (n - 2) .... / 1 * 2 * 3 ... r
        for(int i = 1; i <= r; i ++){
            res = res *  (N - r + i) / i ;
        }

        return (int)res ;
    }
};
    