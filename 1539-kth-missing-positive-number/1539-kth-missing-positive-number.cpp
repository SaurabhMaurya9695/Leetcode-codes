class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for (auto a : arr)
        {
            if (a <= k)
            {
                k++;
                cout<<k << " ";
            }
            cout<< endl;
        }
        return k;
    }
};