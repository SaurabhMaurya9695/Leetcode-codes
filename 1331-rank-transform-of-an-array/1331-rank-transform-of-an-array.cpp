class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr)
    {
        int n =arr.size() ;
        set<int> st ;
        for(int &x : arr)
        {
            st.insert(x);
        }
        map<int,int>mp;
        int rank = 1;
        for(auto it : st)
        {
            mp[it] = rank ;
            rank++;
        }
        for(int i = 0; i< n; i++)
        {
            arr[i] = mp[arr[i]]; 
        }
        return arr;
    }
};

static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
