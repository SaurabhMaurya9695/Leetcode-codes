// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main(String args[])
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    int n = sc.nextInt();
                    int A[] = new int[n];
                    for(int i = 0;i<n;i++)
                        A[i] = sc.nextInt();
                    Solution ob = new Solution();
                    System.out.println(ob.minDifference(A,n));
                }
        }
}    // } Driver Code Ends


//User function Template for Java

class Solution
{

	public int minDifference(int arr[], int n) 
	{ 
	 
	    int sum=0;
	    for(int i:arr){
	        sum += i;
	    }
	    
	    boolean[][]dp = new boolean[n][sum+1];
	    
	    for(int i=0; i<n; i++){
	        dp[i][0] = true; 
	    }
	    
	    dp[0][arr[0]] = true;
	    
	    for(int i=1; i<n; i++){
	        for(int tar=1; tar<=sum; tar++){
	            
	            boolean pick = false;
	            if(arr[i] <= tar){
	                pick = dp[i-1][tar - arr[i]]; 
	            }
	            
	            boolean  nopick = dp[i-1][tar];
	            
	            dp[i][tar]=pick || nopick;
	        }
	    }
	    
	    int mini = Integer.MAX_VALUE;
	    
	    for(int i=0; i<=sum/2; i++){
	        if(dp[n-1][i]==true){
	            mini = Math.min(mini, (Math.abs(sum-i)-i));
	        }
	    }
	    return mini;
	}
}
