class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        
        vector<int> result(n);
        
        for(int i = n-1; i >= 0; i--) {
            while(!st.empty() && arr[i] >= arr[st.top()]) { 
                // if in our stack contain {69 , 72 , 76} and our arr[i] is 71 
                // so arr[i] >= stk.top() 
                // pop until we get the largest element at the top 
                st.pop();
            }
            
            if(st.empty()) { 
                // if we pop all element and our stack become empty this means no element at the top
                result[i] = 0;
            } else {
                result[i] = st.top() - i; // else we have these days 
            }
            
            st.push(i); // pushing the current index 
        }
        
        return result;
        
    }
};
