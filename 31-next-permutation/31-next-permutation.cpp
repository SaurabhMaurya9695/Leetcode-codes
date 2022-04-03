class Solution
{
public:
    void nextPermutation(vector<int>& nums) 
    {
        //method 1 ;
        // next_permutation(nums.begin() , nums.end()); 
        
        
        //method 2;
//Find the highest index i such that s[i] < s[i+1]. If no such index exists, the permutation is the last permutation.
// Find the highest index j > i such that s[j] > s[i]. Such a j must exist, since i+1 is such an index.
// Swap s[i] with s[j].
// Reverse the order of all of the elements after index i till the last element.
        int i, j;
        int n= nums.size();
        int a=0;
        for(i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                break;
            }
        }
        if(i<0)
            reverse(nums.begin(), nums.end());
        else{
            for(j=n-1; j>=0; j--){
                if(nums[i]<nums[j]){
                    break;
                }
            }
            swap(nums[i], nums[j]);
            reverse(nums.begin()+i+1, nums.end());
        }
    }
};