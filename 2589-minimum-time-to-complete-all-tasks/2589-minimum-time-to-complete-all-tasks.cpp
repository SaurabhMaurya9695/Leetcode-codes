class Solution {
public:
    int findMinimumTime(vector<vector<int>>& tasks) {
        int arr[2001] = {};
        sort(tasks.begin(), tasks.end(), [&](const vector<int>& vect1, const vector<int>& vect2)
        {
            return vect1[1] < vect2[1];
        });
        int cnt = 0;
        for(auto t: tasks){
            int l = t[0], r = t[1], dur = t[2];
            
            //think greedly if it is visited from starting then dur -- else put in last ;
            for(int i = l;i<=r;i ++){
                if(arr[i] == 1){ // if it is already marked then dur -- ;
                    dur --;
                }
            }
            for(int i = r;dur > 0;i --){
                if(arr[i] == 0){
                    dur --;
                    arr[i] = 1;
                }
            }
        }
        for(int i = 1;i<=2000;i ++){
            if(arr[i] == 1) 
            cnt ++;
        }
        return cnt;
    }
};