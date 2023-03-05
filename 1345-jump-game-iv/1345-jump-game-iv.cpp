class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, vector<int>> indicesOfValue;
        for (int i = 0; i < n; i++)
            indicesOfValue[arr[i]].push_back(i);  // creating a map from where we can go
        vector<bool> visited(n); 
        visited[0] = true; // start from 0 so mark as true;
        queue<int> q; 
        q.push(0); // we pushed 0 in queue
        int step = 0;
        while (!q.empty()) {
            for (int size = q.size(); size > 0; --size) 
            {
                int i = q.front(); 
                q.pop();
                if (i == n - 1) return step; // Reached to last index
                vector<int>& next = indicesOfValue[arr[i]];
                next.push_back(i - 1);
                next.push_back(i + 1);
                for (int j : next) 
                {
                    if (j >= 0 && j < n && !visited[j]) 
                    {
                        visited[j] = true;
                        q.push(j);
                    }
                }
                indicesOfValue[arr[i]].clear(); // avoid later lookup indicesOfValue arr[i]
            }
            step++;
        }
        return 0;
    }
};