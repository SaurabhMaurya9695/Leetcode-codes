// class Solution {
// public:
//     string smallestEquivalentString(string s1, string s2, string baseStr) {
//         // p->m;
//         // a-> o;    // parser -> mokkek
//         // r->r;     // p->m , a->o , r->r,k,s , k->r,s , e->i , r->
//         // k->r;
//         // e->i;
//         // r->s;
//     }
// };
class Solution {
public:

    int parent[26];

    void makeSet(){
        for(int i = 0; i < 26; i++){
            parent[i] = i;
        }
    }

    int find(int node){
        if(node == parent[node]){
            return node;
        }
        return parent[node] = find(parent[node]); 
    }

    void unionFunc(int u, int v){
        u = find(u);
        v = find(v);
        if(u < v) parent[v] = u;
        else parent[u] = v;
    }

    string smallestEquivalentString(string s1, string s2, string baseStr) {
        
        int n = s1.length();
        makeSet();

        for(int i = 0; i < n; i++){
            int c1 = s1[i] - 'a';
            int c2 = s2[i] - 'a';
            unionFunc(c1, c2);
        }

        for(auto &ch : baseStr){
            ch = 'a' + find(ch - 'a');
        }

        return baseStr;

    }
};