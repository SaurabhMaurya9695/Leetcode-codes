class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) 
    {
        int len = m + n;
        vector<int> ans (len) ;
        int i  = 0 , j  =  0, k = 0  ;
        
        while(i < m && j < n) 
        {
            if(a[i] > b[j])
            {
                ans[k] = b[j];
                j ++ ;
            }
            else{
                ans[k] = a[i];
                i ++ ;
            }
            k ++;
        }
        
        while(j < n)
        {
            ans[k] = b[j];
            j++ , k++;
        }
        while(i < m)
        {
            ans[k] = a[i];
            i++ , k++;
        }
        // a.clear();
        for(int i = 0 ; i < ans.size() ; i ++)
        {
            a[i] = ans[i];
        }
        
        
    }
};