class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.length();
        int m=s.length();
        int p=0;
        for(int i=0;i<n;i++)
        {
            if(t[i]==s[p])
            {
                p++;
            }
        }
        return(p==m);
    }
};