class Solution {
public:
    
    // next smaller to right idx;
    vector<int>nsridx(vector<int> &arr , int n )
    {
        vector<int> ans ;
        stack<int> stk;
        for(int i = n - 1 ; i>=0 ; i--)
        {
            while(stk.size() > 0 && arr[stk.top()] >= arr[i])
            {
                stk.pop();
            }
            if(stk.size() == 0)
            {
                ans.push_back(n);
            }
            else{
                ans.push_back(stk.top());
            }
            stk.push(i);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }


// next smaller to left idx;
    vector<int>nslidx(vector<int> &arr , int n )
    {
        vector<int> ans2 ;
        stack<int> stk;
        for(int i = 0 ; i < n ; i ++ )
        {
            while(stk.size() > 0 && arr[stk.top()] >= arr[i])
            {
                stk.pop();
            }
            if(stk.size() == 0)
            {
                ans2.push_back(-1);
            }
            else{
                ans2.push_back(stk.top());
            }
            stk.push(i);
        }
        return ans2;
    }
    
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size() ;
        vector<int> nsr = nsridx(arr , n);
        vector<int> nsl = nslidx(arr , n) ;
        int maxarea = 0;
        for(int i = 0 ; i< n ; i++)
        {
           int  width = nsr[i] - nsl[i] - 1;
            int area = width * arr[i] ;
            if(area > maxarea)
            {
                maxarea = area ;
            }
        }
        return maxarea ; 
    }
};