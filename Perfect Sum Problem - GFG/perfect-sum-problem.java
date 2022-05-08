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
                    int sum = sc.nextInt();
                    int arr[] = new int[n];
                    for(int i = 0;i<n;i++)
                    arr[i] = sc.nextInt();
                    
                    Solution ob = new Solution();
                    System.out.println(ob.perfectSum(arr,n,sum));
                }
        }
}    // } Driver Code Ends


class Solution{

	static int memo(int ind, int[] arr, int tar, int[][] dp) {
        if (ind == 0) {
            if (tar == 0 && arr[0]==0) {
                return 2;
            } 
            if(tar==0 || tar==arr[0]){
                return 1;
            }
            return 0;
        }

        if (dp[ind][tar] != -1) {
            return dp[ind][tar];
        }

        int noPick = memo(ind - 1, arr, tar, dp)%1000000007;

        // bsc if array ele is grater than tar then return 0
        int pick = 0;
        if (arr[ind] <= tar) {
            pick = memo(ind - 1, arr, tar - arr[ind], dp)%1000000007;
        }

        dp[ind][tar] = (pick + noPick)%1000000007;

        return (pick + noPick)%1000000007;
    }

	public int perfectSum(int arr[],int n, int k) 
	{ 
	    // Your code goes here
	    int[][]dp = new int[arr.length][k+1];

        for(int[]row :dp){
            Arrays.fill(row, -1);
        }
        
        return memo(arr.length-1, arr, k, dp)%1000000007;
	} 
}