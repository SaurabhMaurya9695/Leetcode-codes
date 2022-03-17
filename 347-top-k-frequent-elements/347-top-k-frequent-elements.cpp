class Solution {
public:
    #define ll pair<int,int>
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue< ll , vector<ll >, greater<ll> > pq;
        unordered_map<int ,int > mp;
        for(int x : nums) mp[x]++;
        for(auto it : mp)
        {
            pq.push({it.second , it.first});
            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        vector<int> v;
        int kx = pq.size() ;
        while(kx --)
        {
            v.push_back(pq.top().second);
            pq.pop() ;
        }
        return v ;
    }
};