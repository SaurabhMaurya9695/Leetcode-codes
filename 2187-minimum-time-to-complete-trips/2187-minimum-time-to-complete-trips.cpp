class Solution {
public:
    
    #define ll long long
 
    bool ifIsPossibleToMakeTrip(vector<int> time ,  int totalTrips , ll mid)
    {
        ll ourTrips = 0;
        for(ll i = 0 ;i < time.size() ; i ++){
            ourTrips += (mid / time[i]);
        }
        if(ourTrips >= totalTrips) return true;
        else return false ; // <=
    }
    
    long long minimumTime(vector<int>& time, int totalTrips) {
        ll start = 1 ;
        ll end = 1e14 ;
        ll ans = totalTrips; 
        
        while(start <=  end){
            ll mid = start + (end - start ) / 2;
            if(ifIsPossibleToMakeTrip(time , totalTrips , mid) == false){
                  start = mid + 1;
            }
            else{
                ans = mid ;
                end = mid -1 ;
            }
        }
        return ans ;
    }
};