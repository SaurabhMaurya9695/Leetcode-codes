class MinStack {
public:
    vector<int>arr;
    MinStack() {
        
        // vector<int>arr;
    }
    
    void push(int val) {
        arr.push_back(val);
    }
    
    void pop() {
        auto it = arr.end() -1 ;
        arr.erase(it);
    }
    
    int top() {
        return arr[arr.size() - 1];
    }
    
    int getMin() {
        int x =*min_element(arr.begin() , arr.end());
        return x ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */