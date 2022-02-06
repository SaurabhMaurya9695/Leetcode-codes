class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size() ;
        int cnt= 2 ; // traverse the array two times ;
        stack<int> s;
        vector<int> arr1(n);
        while(cnt--)
        {

            for (int i = n - 1; i >= 0; i--)
            {		
                while (!s.empty() && s.top() <= arr[i])
                    s.pop();

                if (s.empty())
                    arr1[i] = -1;		
                else
                    arr1[i] = s.top();	

                s.push(arr[i]);
            }
        }
        return arr1 ;
        
    }
};