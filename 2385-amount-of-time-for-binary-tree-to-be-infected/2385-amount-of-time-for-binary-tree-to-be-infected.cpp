/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void createGraph(unordered_map<int, vector<int>> &  adj , int parent , TreeNode* currVal){
        
        if(currVal == NULL) return ;
        
        if(parent != -1){  //means this is a root and it has no parent 
            adj[currVal->val].push_back(parent);
        }
        
        //then check for left and right 
        if(currVal->left ){
            adj[currVal->val].push_back(currVal->left->val);
        }
        
        if(currVal->right ){
            adj[currVal->val].push_back(currVal->right->val);
        }
        
        // we added our parent , left and right
        createGraph(adj , currVal->val , currVal->left);
        createGraph(adj , currVal->val , currVal->right);
    }
    
    
    int amountOfTime(TreeNode* root, int start) {
        // aise question ko solve krna possible ni hai .. kyuki ye BinaryTree directed hote hai
        // first we need to make this binary tree as a undirected graph 
        // then easily we can solve by doing BFS 
        unordered_map<int, vector<int>> adj ;
        int parent = -1; 
        createGraph(adj , parent , root );
        
        /*
        for(auto &[l , r] : adj){
            cout << l << "->" ;
            for(auto &x : r){
                cout << x << " ";
            }
            cout << endl;
        }
        */
       
        
        
        // Now do BFS level by level 
        int ans = 0;
        queue<int> q ;
        unordered_set<int> visited ;
        q.push(start);
        visited.insert(start) ;
        
        // now start BFS 
        while(!q.empty()){
            int sz = q.size() ;
            while(sz --){
                int front = q.front() ;
                q.pop();
                // add that element/ neighbour into queue from adj list
                for(auto & neighbour : adj[front]){
                    if(visited.find(neighbour) == visited.end()){ 
                        // means we haven't visited yet 
                        q.push(neighbour);
                        visited.insert(neighbour);
                    }
                }
            }
            
            //after ending one level means we infected all of that neighbour 
            ans ++ ;
        }
        
        return ans - 1;
    }
};











