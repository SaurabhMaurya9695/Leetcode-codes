class Solution {
public:
//     int minAddToMakeValid(string s) {
//         int cnt = 0;
//         stack<char> stk;
//         int n = s.size();
//         for(int i = 0 ; i <  n ;i++)
//         {
//             if(s[i] == ')')
//             {
//                 if(stk.size() > 0 && stk.top() == '(')
//                 {
//                     stk.pop();
//                 }
//                 else {
//                     stk.push(s[i]);
//                 }
//             }
//             else{
//                 stk.push(s[i]);
//             }
//         }
//         // return stk.size() ;
//         while(!stk.empty())
//         {
//             stk.pop();
//             cnt++;
//         }
//         return cnt;
        
//     }
    
    int minAddToMakeValid(string s) 
    {
        
        // time -> o(n);
        // space -> o(1);
        int open = 0 , close = 0 , ans = 0;
        for(auto x : s)
        {
            if(x == '(')
            {
                open++;
            }
            else{
                close++;
            }
            if(close > open)
            {
                ans++;
                open++;
            }
        }
        return ans + (abs ( open -close));
    }
};