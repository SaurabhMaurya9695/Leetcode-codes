// STEPS

// Loop i on all numbers,
// loop j on all numbers,
// check if k = target - i - j is valid , i.e k >0 and k<=100.

// We have to keep in mind the 3 cases to cover all the possibility of the combination.

// i == j == k
// i == j != k
// i < k && j < k
class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int mod=1000000007;
        long result=0;
		// creating an array that will keep the count of the occurence of elements of arr
		// instead of this array you can also create an map that stores the frequency of the elements
        long c[101]={0};
        
		// storing the count of the elements in the array
        for(int i=0;i<arr.size();i++)
        {
            c[arr[i]]++;
        }
        
        for(int i=0;i<=100;i++)
        {
            for(int j=i;j<=100;j++)
            {
                int k=target-i-j;
                
				// checking if the k is coming out to be valid or not
                if(k<0 || k>100)
                {
                    continue;
                }
				// now we will do a check on all the 3 cases and will update the result variable
                if(i==j && j==k)
                {
                    result=result+(c[i]*(c[i]-1)*(c[i]-2)/6);
                }
                else if(i==j && j!=k)
                {
                    result=result+((c[i]*(c[i]-1)/2) * c[k]);
                }
                else if(i<j && j<k)
                {
                    result=result+(c[i]*c[j]*c[k]);
                }
            }
        }
        return (int)(result%mod);
        
    }
};