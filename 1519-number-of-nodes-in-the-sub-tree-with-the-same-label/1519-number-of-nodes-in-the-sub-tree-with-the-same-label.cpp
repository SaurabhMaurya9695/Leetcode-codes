class Solution {
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<int> res(n), vis(n);
        vector<vector<int>> adj(n);
        for(auto &edge: edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        fun(0, adj, res, vis, labels);
        return res;
    }
    
    vector<int> fun(int root, vector<vector<int>> &adj, vector<int> &res, vector<int> &vis, string &labels) {
        vis[root] = 1;
        vector<int> count(26);
        for(auto &ad: adj[root]) {
            if(vis[ad]) continue;
            vector<int> currCount = fun(ad, adj, res, vis, labels);
            for(int i=0; i<26; i++) count[i] += currCount[i];
        }
        count[labels[root]-'a']++;
        res[root] = count[labels[root]-'a'];
        return count;
    }
};