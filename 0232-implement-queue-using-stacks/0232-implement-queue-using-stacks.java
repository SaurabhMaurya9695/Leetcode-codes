class MyQueue {

    Stack<Integer> input ;    
    Stack<Integer> output ; 
    
    public MyQueue() {
         input = new Stack();
         output = new Stack();
    }
    
    public void push(int x) {
        input.add(x);
    }
    
    public int pop() {
        if(output.size() == 0 ){
            // then we have to pop all the element from the input to output 
            while(!input.empty()){
                output.add(input.peek());
                input.pop();
            }
        }
        
        int element = output.peek();
        output.pop();
        return element ;
    }
    
    public int peek() {
        if(output.size() == 0 ){
            // then we have to pop all the element from the input to output 
            while(!input.empty()){
                output.add(input.peek());
                input.pop();
            }
        }
        
        int element = output.peek();
        return element ;
    }
    
    public boolean empty() {
        if(output.size() == 0 && input.size() == 0){
            return true;
        }
        else{
            return false;
        }
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */