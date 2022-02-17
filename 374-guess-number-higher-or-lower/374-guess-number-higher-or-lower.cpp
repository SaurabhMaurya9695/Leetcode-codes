class Solution {
public:
    int guessNumber(int n) {
        int i = 1;
        int j = n;
        while(i <=j)
        {
            int mid = i + (j -i) /2;
            if(guess(mid) == 0) // wrong pick
            {
                return mid;
            }
            else if(guess(mid) ==1) // higher than your guess 
            {
                i = mid + 1;
                
            }
            else{   // lower than your guess .
                j = mid - 1; 
            }
        }
        return - 1;
        
    }
};