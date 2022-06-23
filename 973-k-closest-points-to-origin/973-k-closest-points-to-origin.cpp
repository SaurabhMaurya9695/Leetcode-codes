class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        priority_queue<pair<int, int>> pq;
        int i=0;
        for(auto it:points) 
        {
            int x = it[0]*it[0] + it[1]*it[1];
            pq.push({x, i});
            if(pq.size() > k) pq.pop();
            i++;
        }
        vector<vector<int>> res;
        while(!pq.empty()) {
            int i = pq.top().second;
            res.push_back({points[i][0], points[i][1]});
            pq.pop();
        }
    return res;
    }
};