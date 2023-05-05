class Solution {
public:
    int longestMountain(vector<int>& arr)
    {
        int ans=0;
        int n=arr.size();
        for(int i=1;i<arr.size()-1;i++)
        {
            //treating every element as a peak;
            int start=i;
            int end=i;
            
            //before exploring first check whether exist in left or right 
            //then go in left deep and right deep ;
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
            {
                // go till start exist
                while(start>0&&arr[start]>arr[start-1]){
                    start--;
                }
                
                // go till end exist
                while(end<n-1 &&arr[end]>arr[end+1]){
                    end++;
                }
                
                ans=max(end-start+1,ans); // our length our mountain is end-start+1
                end=end+1; // already calculated for start ..check kro end now 
            }
        }
        return ans;
    }
};