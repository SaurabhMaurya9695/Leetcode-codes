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
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin() , piles.end());
        int ans = high;
        while(low <= high){
            int midSpeed = low + (high - low) / 2;
            
            if(isPossible(piles, midSpeed, h) == true){
                ans = midSpeed;
                high = midSpeed - 1;
            } else {
                low = midSpeed + 1;
            }
        }
        return ans;
    }
};