//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int n){
        int temp = n ;
        int ans = 0 ;
        while(temp != 0){
            int rem = temp % 10 ; //=> 2 ,1
            temp = temp / 10 ; // 1 , 0
            
            // 5 / 0 => exception -> infinity
            if(rem > 0 && n % rem == 0){
                ans ++ ;
            }
        }
        return ans ;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends