class Solution {
public:
    
    vector<int> sequentialDigits(int low, int high) {
        // here we can use bfs  because we are  generating our ans from 
        // 1 2 3 4 5 6 7 8 
        // we can try to make 1 to 12 , 123 , 1234 , 12345 
        // we can try to make 2 to 23 , 234 , 2345 , 23456 
        // and make sure last digit is always <= 9
        queue<int > q;
        for(int i = 1; i <= 8 ; i++){
            q.push(i);
        }
        
        vector<int> ans ;
        while(!q.empty()) {
            // if we have at front is 12
            int temp = q.front();
            q.pop();
            
            // 12 is <= low 
            if(temp >= low && temp <= high) {
                ans.push_back(temp);
            }
            
            // last digit is 2 
            int last_digit = temp % 10;
            if(last_digit + 1 <= 9) {
                int next_val = temp * 10 +(last_digit + 1) ; //123
                q.push(next_val); // push it to the queue and we are trying to make from 123 to 1234 
            }
        }
    
        return ans;
    }
};

