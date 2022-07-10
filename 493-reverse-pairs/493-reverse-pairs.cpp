class Solution {
public:
    int merge(vector<int>&arr, int l, int m, int r)
    {
         // Your code here
         int n1 = m - l + 1;
         int n2= r - m;
         int arr1[n1] , arr2[n2];
         for(int i=0;i<n1;i++)
         {
             arr1[i]=arr[i+l];
         }
         for(int i=0;i<n2;i++)
         {
             arr2[i]=arr[i+m+1];
         }
        
          int c=0;
          int i, j, k;
              i = 0;
              j = 0;
              k = l;
        
        // cnt inversion 
        while(i<n1 && j<n2)
        {
            if(arr1[i]>2LL*arr2[j])
            {
                c+=n1-i;
                j++;
            }
            else
                i++;
        }
        
            i=0,j=0;
        
           while (i < n1 && j < n2) {
            if (arr1[i] <= arr2[j]) {
              arr[k] = arr1[i];
              i++;
            } else {
              arr[k] = arr2[j];
              j++;
            }
            k++;
          }
           while (i < n1) {
            arr[k] = arr1[i];
            i++;
            k++;
          }
        
          while (j < n2) {
            arr[k] = arr2[j];
            j++;
            k++;
          }
        return c;
    }

    int mergeSort(vector<int>& arr, int l, int r)
    {
        //code here
        int c=0;
        if(l<r)
        {
            int m=(l+r)/2;
            c+=mergeSort(arr,l,m); // ans from left ;
            c+=mergeSort(arr,m+1,r); // ans from right ;
            c+=merge(arr,l,m,r); // ans after merging
        }
        return c;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};