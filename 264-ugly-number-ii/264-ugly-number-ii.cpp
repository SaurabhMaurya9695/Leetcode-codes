class Solution {
public:
    int nthUglyNumber(int n) 
    {
        int ptr5 = 0 , ptr2 = 0 , ptr3 = 0 ;
        vector<int> ans ;
        ans.push_back(1) ;
        for(int i = 2 ; i<= n ; i++)
        {
            int a = ans[ptr5] * 5 ;
            int b = ans[ptr3] * 3 ;
            int c = ans[ptr2] * 2 ;
            int mini = min(a , min(b , c)) ;
            ans.push_back(mini);
            if(mini ==  a) ptr5++ ;
            if(mini == b ) ptr3++;
            if(mini == c) ptr2++;
        }
        return ans[n - 1] ;
        
        
    }
};