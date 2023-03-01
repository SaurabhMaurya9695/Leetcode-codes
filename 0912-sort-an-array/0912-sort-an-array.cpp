class Solution {
public:
    
    vector<int> conq(vector<int>&a , vector<int>&b , int m , int n )
    {
        vector<int> c(n + m);
        int i = 0 ;
        int j = 0;
        int k = 0; // to storing in c;
        while(i< m && j < n)
        {
            if(a[i] > b[j])
            {
                c[k] = b[j];
                j++;
                k++;
            }
            else{
                c[k] = a[i] ;
                i ++ ;
                k++;
            }
        }
        
        // if element is left in i 
        while(i < m)
        {
            c[k] = a[i];
            i++;
            k++;
        }
        
        // if element is left in i 
        while(j < n)
        {
            c[k] = b[j] ;
            j ++ ;
            k++;
        }
        return c;
    }
    
    vector<int> divide(vector<int> &arr , int start , int end)
    {
        if(start == end)
        {
            vector<int>temp ;
            temp.push_back(arr[start]) ;
            return temp ;
        }
        int mid = start + (end- start) / 2 ;
        vector<int> left = divide(arr , start , mid);
        vector<int> right = divide(arr , mid + 1 , end) ; 
        vector<int> ans = conq(left , right , left.size() , right.size()) ;
        return ans ;
    }
    
    vector<int> sortArray(vector<int>& arr)
    {
        int n = arr.size() ;
        int start = 0 , end = n - 1 ;
        return divide(arr , start , end) ;
         
    }
};