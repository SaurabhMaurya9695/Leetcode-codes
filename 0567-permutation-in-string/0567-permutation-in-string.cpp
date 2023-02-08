class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size() ;
        int m = s2.size() ;
        if(n > m) return false;
        
        //we have to create map for s1 ;
        unordered_map<char , int>mp;
        for(auto x : s1) mp[x]++;
        
        int size = mp.size() ;
        int k = n ;
        int i = 0 , j = 0;
        while(j < m)
        {
            //ca
            if(mp.find(s2[j]) != mp.end()) // means we found 
            {
                mp[s2[j]] -- ;
                if(mp[s2[j]] == 0)
                {
                    size -- ;
                }
            }
            if(j - i  + 1 != k )
            {
                j ++ ;
            }
            else if(j - i + 1 == k)
            {
                if(size == 0) return true;
                
                if(mp.find(s2[i]) != mp.end()) 
                {
                    mp[s2[i]] ++ ;
                    if(mp[s2[i]] == 1) size ++;
                }
                i++;
                j++;
            }
        }
        return false;
    }
};