class Solution {
public:
    int triangleNumber(vector<int>& arr) {
        sort(arr.begin() , arr.end()) ;
        reverse(arr.begin() , arr.end()) ;
        // x ,y , z 
        //for traingle => x > y + z; // 4 3 2 2
        int cnt = 0 ;
        for(int i = 0 ; i < arr.size() ; i ++)
        {
            int start =  i + 1;
            int end = arr.size() - 1;
            while(start < end)
            {
                int x = arr[i] , y = arr[start] ,  z = arr[end];
                if(y + z > x)
                {
                    cnt += end - start;
                    start ++  ;
                }
                else{
                    end -- ;
                }
            }
        }
        return cnt;
    }
};