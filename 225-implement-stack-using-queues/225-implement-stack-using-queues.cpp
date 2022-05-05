
class MyStack {
private:
    queue<int> into, out;
    int front;
    
public:
    MyStack() {}
    
    void push(int x) {
        into.push(x);
        front = x;
    }
    
    int pop() {
        queue<int> temp;
        int current;
        
        while(into.size() != 1){
            front = into.front();
            into.pop(); out.push(front);
        }
        
        current = into.front();
        into.pop();
        
        into = out; out = temp;
        
        return current;
    }
    
    int top() {
        return front;
    }
    
    bool empty() {
        return into.empty();
    }
};