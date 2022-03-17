class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int> mp;
        for(int i = 0;i < s.size() ; i++)
        {
            mp[s[i]]++;
        }
         priority_queue<pair<int,char>> pq;
        for(auto it: mp)
        {
            pq.push({it.second , it.first}) ;
        }
        string str ="";
       while(!pq.empty())
        {
            int x = pq.top().first;
            while(x != 0)
            {
                str += pq.top().second; //no of times we added this
                x--;
            }
            pq.pop();
        }
        return str;
    }
};

static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();