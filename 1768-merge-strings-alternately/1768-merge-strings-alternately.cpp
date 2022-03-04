class Solution {
public:
    string mergeAlternately(string s1, string s2) 
    {
       int n =s1.size() ;
        int m = s2.size();
        int i = 0 , j = 0 ;
        string ans ="";
        while(i < n && j < m)
        {
            ans += s1[i];
            ans += s2[i];
            i++;
            j++;
        }
        while(i < n)
        {
            ans += s1[i];
            i++;
        }
        while(j < m)
        {
            ans += s2[j];
            j++;
        }
        return ans ;
    }
};