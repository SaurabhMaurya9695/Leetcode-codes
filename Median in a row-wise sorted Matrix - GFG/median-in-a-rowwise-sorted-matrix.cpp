// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &arr, int r, int c){
        // int n = arr.size() ;
        // int m = arr[0].size() ;
        vector<int>ans;
       
       for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++)
           {
               ans.push_back(arr[i][j]);
           }
       }
       
       sort(ans.begin(),ans.end());
       
       int size = ans.size();
       
       int mainans = ans[size/2];
       
       return mainans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends