class Solution {
public:
    int twoEggDrop(int n) {
        // if N == N , and Eggs = 1
        // in worst case we can drop one egg from the top floor , so that egg can be distroyed 
        // here we can use linear serach , failed binary search beacause , if you find ans at some point then
        // your egg distroyed , so we can say this is our ans ;
        
        
        // if N == N , and Eggs = 2;
        
        double ans = (-1.0 + sqrt(1.0 + 8.0 * n ) ) / 2.0  ;
        return (int)(ceil (1.0 * ans)) ;
    }
};