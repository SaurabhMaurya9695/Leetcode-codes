// class Solution {
// public:

                            // Method 1;

    // int minSwaps(string s) {
    //     int n = s.size() ;
    //     int cnt =0;
    //     stack<char> stk;
    //     for(int i = 0; i< n ;i++)
    //     {
    //         if(s[i] == '[')
    //         {
    //             stk.push(s[i]);
    //         }
    //         else {
    //             if(stk.size()  > 0 && stk.top() == '[')
    //             {
    //                 stk.pop();
    //             }
    //             else{
    //                 stk.push(s[i]);
    //             }
    //         }
    //     }
    //     int b = stk.size() / 2;
    //     int ans = (b % 2 == 1) ? b/2 + 1 : b /2;
    //     return ans ;
    // }
// };

                        // Method 2

    class Solution {
public:
    int minSwaps(string s) {
        // int start=0,end=s.size()-1,open=0,close=0,ans=0;
        // while(start<end){
        //     if(s[start]==']'){
        //         open++;
        //     } else {
        //         close++;
        //     }
        //     if(open>close){
        //         while(s[end]!='['){
        //             end--;
        //         }
        //         swap(s[start],s[end]);
        //         ans++;
        //         open--;
        //         close++;
        //     }
        //     start++;
        // }
        // return ans;
        
                            //Method 3
        // int close=0 , maxClose=0;
        // for(char ch:s)
        // {
        //     if(ch==']')
        //         close++;
        //     else if(ch == '[')
        //         close--;
        //     maxClose=max(maxClose,close);
        // }
        // return (maxClose + 1)/2;
        
        
                                //Method 4
        
        
        int n = s.size();
        int open = 0 , ans = 0;
        for(int i = 0 ;i<n ; i++)
        {
            if(s[i] == '[')
            {
                open++;
            }
            else if(s[i] == ']')
            {
                if(open > 0)
                {
                    open--;
                }
                else{
                    ans++;
                }
            }
        }
        return (ans % 2 == 1) ? (ans / 2 + 1) : (ans / 2);
        
        

        
        
        
    }
};