class Solution {
public:
    
         bool isPossible(vector<int> pages , int books, int maxLoad, int totalStud){
        int currStud = 1, currPages = 0;

        for(int i=0; currStud <= totalStud && i<books; i++){

            if(currPages + pages[i] <= maxLoad){
                currPages += pages[i];
            } else {
                currStud++;
                currPages = pages[i];
            }

        }

        if(currStud > totalStud) return false;
        return true;
    }
    
    int findPages(vector<int> pages, int books , int students)
    {
        int start = *max_element(pages.begin() , pages.end()) ;// min no of pages can read by student
        int sum = 0 ;
        int n = books ;
        for(int i =0 ; i< n; i++)
        {
            sum += pages[i];
        }
        int high = sum ;
        int ans = -1;
        while(start <= high)
        {
            int mid = start + ( high -  start) / 2;
            if(isPossible(pages, books, mid, students) == true) // is should be a possible ans;
            {
                ans = mid;
                high = mid - 1;
            }
            else{
                start = mid + 1 ;
            }
        }
        return ans;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size() ;
        int x = findPages(weights , n ,  days) ;
        return x;
    }
};