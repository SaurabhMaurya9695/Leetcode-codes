class MyQueue {
public:
    stack<int> st1, st2;
    void push(int x) {
        st1.push(x);
    }
    int pop() {
        if(!st2.empty()) {
            int x = st2.top();
            st2.pop();
            return x; 
        }
        else {
            while(!st1.empty()) {
                int x = st1.top();
                st1.pop();
                st2.push(x);
            }
            int x = st2.top();
            st2.pop();
            return x;
        }
    }
    int peek() {
        if(!st2.empty())
            return st2.top();
        else {
            while(!st1.empty()) {
                int x = st1.top();
                st1.pop();
                st2.push(x);
            }
            return st2.top();
        }
    }
    bool empty() {
        if(st2.empty() and st1.empty())
            return true;
        return false;
    }
};