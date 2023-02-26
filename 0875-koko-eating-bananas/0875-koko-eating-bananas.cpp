class Solution {
public:
    int ceil(int x , int y){
        if(x % y == 0){
            return (x / y);
        }
        else{
            return (x / y) + 1;
        }
    }
    
    bool isItPossibleToEat( vector<int> piles , int h , int k )
    {
        long long timeTakenToEat = 0 ;
        for(int i = 0 ; i < piles.size() ; i ++){
            timeTakenToEat += ceil(piles[i] , k) ;
        }
        
        if(timeTakenToEat > h) return false;
        else{
            return true ;
        }
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size() ;
        int start = 1 ;
        int end = *max_element(piles.begin() , piles.end())  ;
        int ans  = h ; // 
        while(start <= end){
            int mid = start + (end - start) / 2;
            // transistion point code ;
            if(isItPossibleToEat(piles , h , mid ) == true) // if it is a tran point
            {
                ans = mid ;
                end = mid - 1;
            }
            else{
                start =  mid + 1;
            }
        }
        return ans ;
    }
};