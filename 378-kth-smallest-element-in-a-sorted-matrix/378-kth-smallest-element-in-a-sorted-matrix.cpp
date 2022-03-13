class Solution {
public:
    
    int solve(vector<int> arr , int n , int k)
    {
        priority_queue<int> pq;
        for(int x : arr)
        {
            pq.push(x);
            if(pq.size() > k) // stop and return top
            {
                pq.pop() ;
            }
        }
        return pq.top() ;
        
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> ans;
        for(int a = 0; a < matrix.size() ; a++)
        {
            for(int b= 0 ; b <  matrix[0].size() ;b++ )
            {
                ans.push_back(matrix[a][b]);
            }
        }
        int x = solve(ans  , ans.size() ,k);
        return x ;
        
        
    }
};

static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
