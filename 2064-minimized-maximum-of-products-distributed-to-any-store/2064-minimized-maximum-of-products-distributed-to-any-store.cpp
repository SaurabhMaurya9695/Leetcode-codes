class Solution {
public:
    
    bool isPossible(vector<int>& piles , int speed, int maxHours){
        int currHours = 0;
        for(int banana: piles){
            currHours = currHours + banana/speed;
            if(banana % speed != 0) currHours++;
        }
        
        if(currHours <= maxHours) return true;
        return false;
    }
    int minimizedMaximum(int n, vector<int>& piles) {
        // at most one product type  -> eat almost one banana ;
        // it can be possibly eat 0 no of product 
        //let x => let x be the eating speed 
        
        // same as koko eating banana ;
        
        int low = 1, high = *max_element(piles.begin() , piles.end());
        int ans = high;
        while(low <= high){
            int midSpeed = low + (high - low) / 2;
            
            if(isPossible(piles, midSpeed, n) == true){
                ans = midSpeed;
                high = midSpeed - 1;
            } else {
                low = midSpeed + 1;
            }
        }
        return ans;
    }
};

static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
