class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        vector<int> ans(n + m);
        int i = 0, j =0 ;
        int k = 0;
        while(i < m && j < n)
        {
            if(arr1[i] >  arr2[j])
            {
                ans[k] = arr2[j];
                j++;
                k++;
            }
            else{
                ans[k] = arr1[i];
                i++;
                k++;
            }
        }
        while(i < m)
        {
            ans[k] = arr1[i];
            i++;
            k++;
        }
        while( j < n)
        {
            ans[k] = arr2[j];
            j++;
            k++; 
        }
        for(int i = 0; i< k ; i ++)
        {
            arr1[i] = ans[i];
        }
    }
};