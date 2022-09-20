class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        int n = s.size() ;
        unordered_map<char , int > mp;
        for(auto x : s)
        {
            mp[x]++;
        }
        int occ = n / mp.size();
        // cout<< occ << endl;
         
        for(auto it : mp)
        {
            if(it.second != occ)
            {
                return false;
            }
        }
        return true;
    }
};