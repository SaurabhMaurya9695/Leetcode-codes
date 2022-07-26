class StockSpanner {
public:
    stack<pair<int,int>> stk;
    StockSpanner() {
        
    }
    
    int next(int price) {
       
        // if(stk.empty() || stk.top().first > price) // 100 > 80 
        // {
        //     stk.push({price , 1});
        //     return 1;
        // }
        // else {
        //     // 60 < 70 ;
        //     int current_span = 1;
        //     while(!stk.empty() && stk.top().first <= price)
        //     {
        //         current_span += stk.top().second;
        //         stk.pop();
        //     }
        //     stk.push({price , current_span});
        //     return current_span;
        // }
        
        
        int curr_span = 1;
        while(!stk.empty()&& stk.top().first <= price)
        {
            curr_span += stk.top().second;
            stk.pop();
        }
        stk.push({price ,curr_span});
        return curr_span;
       
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */