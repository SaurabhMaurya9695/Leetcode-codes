/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

// class Solution {
// public:
//     //vector<vector<int>> levelOrder(Node* root) {
// //          vector<vector<int>> res;
// //         if(!root) return res;
// //         queue<Node*> q; 
// //         q.push(root); 
        
// //         while(q.size() > 0 )
// //         {  
// //            int len = q.size();
// //             vector<int> res2;
// //             while(len--)
// //             {
               
// //                Node* curr = q.front(); 
// //                 q.pop();
// //                res2.push_back(curr->val);
               
// //                for(Node* child : curr->children)
// //                {
// //                    q.push(child);
// //                }
// //            } 
// //             res.push_back(res2);
// //         }
// //         return res ;
//     }
// };

class Solution {
public:
    
    vector<vector<int>> res;
    void dfs(Node* root , int depth)
    {
        if(root == NULL) return;
        if(res.size() == depth)
            res.push_back(vector<int>());
        res[depth].push_back(root->val );
        for(auto it : root->children)
            dfs(it , depth + 1);
         
    }
    vector<vector<int>> levelOrder(Node* root) 
    {
        dfs(root ,  0);
        return res ;
    }
};






















