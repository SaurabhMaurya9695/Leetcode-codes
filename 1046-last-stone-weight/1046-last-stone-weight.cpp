class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        // base case ;
        if( stones.size()  == 1)
            return stones[0] ;
        priority_queue<int> pq;
        for(int x : stones)
        {
            pq.push(x);
        }
        while(pq.size() != 1)
        {
            int n1 = pq.top() ;
            pq.pop();
            int n2 = pq.top();
            pq.pop();
            int diff = abs(n1 - n2) ;
            pq.push(diff);
        }
        return pq.top() ;
        
    }
};