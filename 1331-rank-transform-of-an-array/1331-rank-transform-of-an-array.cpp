// class Solution {
// public:
//     vector<int> arrayRankTransform(vector<int>& arr)
//     {
//         int n =arr.size() ;
//         set<int> st ;
//         for(int &x : arr)
//         {
//             st.insert(x);
//         }
//         map<int,int>mp;
//         int rank = 1;
//         for(auto it : st)
//         {
//             mp[it] = rank ;
//             rank++;
//         }
//         for(int i = 0; i< n; i++)
//         {
//             arr[i] = mp[arr[i]]; 
//         }
//         return arr;
//     }
// };

// static int x=[](){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
    
//     return 0;
// }();







class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       set<int> st(arr.begin(),arr.end());
        unordered_map<int,int> rank;
        int cur_rank=1;
        for(auto elem:st){
            rank[elem]=cur_rank++;
        }
        
        vector<int> res;
        for(int i=0;i<arr.size();i++){
            res.push_back(rank[arr[i]]);
        }
        
        return res;
    }
};


static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
