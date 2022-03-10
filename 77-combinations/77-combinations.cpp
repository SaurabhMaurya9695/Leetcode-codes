class Solution {
public:
void compute(int i, int n, int k, vector<int> &curr, vector<vector<int>> &res) {
        
        if (curr.size() == k)  // when our size is equal to the k  then we have to push 
        {
            res.push_back(curr); // push 
            return;
        }
        
        if (i > n) return; // base case ;
        
        curr.push_back(i); /// add the i +  1  element 
		
        compute(i+1, n, k, curr, res);  // call the function 
		
        curr.pop_back();  // remove the last element form the vector
         
        compute(i+1, n, k, curr, res); // call the function again 
    }
    
public:
    vector<vector<int>> combine(int n, int k) {        
        vector<int> curr; // to store particulr vector 
        vector<vector<int>> res;  // to store ans ;
        
        compute(1, n, k, curr, res);
        
        return res;
    }
};

static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
