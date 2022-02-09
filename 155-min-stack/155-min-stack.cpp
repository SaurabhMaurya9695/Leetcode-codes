class MinStack {
public:
    vector<int> vec;
    MinStack() {
        
    }
    void push(int val) {
        vec.push_back(val);
    }
    
    void pop() {
        auto it = vec.end()-1;
        vec.erase(it);
    }
    
    int top() {
        return vec[vec.size()-1];
    }
    
    int getMin() {
        return *min_element(vec.begin(), vec.end());
    }
};
