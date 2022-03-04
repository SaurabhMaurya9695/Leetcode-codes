class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& arr) 
    {
        int dist = INT_MAX;
        int ans = -1;
        for(int i = 0; i< arr.size() ; i++ )
        {
            if(x  == arr[i][0] || y == arr[i][1])
            {
                if(dist > (abs(x - arr[i][0]) + (abs(y - arr[i][1]))))
                {
                    dist = ( abs(x - arr[i][0]) + abs(y - arr[i][1]) ) ;
                    ans = i;
                }
            }
        }
        return ans ;
    }
};