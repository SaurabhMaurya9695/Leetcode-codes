class Solution {
public:
    int fib(int n) 
    {
        //using recursion ;
        if(n == 0 || n==1)
            return n;
        else{
            return fib(n-1) +fib(n-2);
        }
        
    }
};
static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
