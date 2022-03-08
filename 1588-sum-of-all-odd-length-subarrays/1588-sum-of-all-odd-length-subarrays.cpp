class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        vector <int> sum;
        int sm=0;
        
        for(int i=0;i<arr.size();i++){
            sm += arr[i];
            sum.push_back(sm);
        }
        
        sm=0;
        int i=0;
        int j=0;
        
        while(i<arr.size()){
            sm += sum[j]- sum[i] + arr[i];
            j+=2;
            if(j >= arr.size()){
                i++;
                j=i;
            }   
        }
        return sm;
    }
};