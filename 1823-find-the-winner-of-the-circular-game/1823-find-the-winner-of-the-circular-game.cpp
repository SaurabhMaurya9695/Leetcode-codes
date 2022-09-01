class Solution {
public:
    int findTheWinner(int n, int k) {
        
        queue<int> q;
        for(int i = 1 ; i <= n ; i++)
        {
            q.push(i);    // 1 2 3 4 5 
        }
        while(q.size() != 1)
        {
            int del = k - 1;
            while(del --)
            {
                int x = q.front();
                q.pop();
                q.push(x);
            }
             q.pop();
            
        }
        return q.front();
    }
};