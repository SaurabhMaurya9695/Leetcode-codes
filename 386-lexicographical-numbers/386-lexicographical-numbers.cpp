class Solution {
public:
    
    void dfs(int cur, int n , vector<int>&ans)
    {
		if(cur > n){
			return;
		}
        else{
            ans.push_back(cur);
            for(int i = 0;i < 10;i++){
                dfs(10 * cur + i, n , ans);
            }
        }
    }
    
    vector<int> lexicalOrder(int n) 
    {
        vector<int>ans;
        for(int i = 1; i < 10;i++)
        {
			dfs(i,n , ans);
	    } 
        return ans;
    }
};