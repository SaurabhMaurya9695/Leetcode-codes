//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int checkInclusion(string s1, string s2) {
        int n = s1.size() ;
        int m = s2.size() ;
        if(n > m) return false;
        
        //we have to create map for s1 ;
        unordered_map<char , int>mp; 
        for(auto x : s1) mp[x]++;
        
        int ans = 0 ;
        int size = mp.size() ;  
        int k = n ;  // window size
        int i = 0 , j = 0; 
        while(j < m)
        {
            //ca
            if(mp.find(s2[j]) != mp.end()) // means we found jth char in map then we have to decrese the frew
            {
                mp[s2[j]] -- ;
                if(mp[s2[j]] == 0)  // if freq is zero 
                {
                    size -- ;  // mp size dec by 1 
                }
            }
            if(j - i  + 1 != k )
            {
                j ++ ;
            }
            else if(j - i + 1 == k)
            {
                if(size == 0) ans ++ ;  // all the elements we found in map 
                
                if(mp.find(s2[i]) != mp.end()) 
                {
                    mp[s2[i]] ++ ;
                    if(mp[s2[i]] == 1) size ++;  //if freq is zero 
                }
                i++;
                j++;
            }
        }
        return ans;
    }
	int search(string s1 , string s2) {
	    // code here
	   return checkInclusion(s1 , s2) ;
	}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends