class Solution {
public:
    
    
    bool  ispossible(vector<int>& pages , int books , int totalstu , int mid)
    {
        int currstudent = 1;
        int totalreadbystud = 0;
        for(int i = 0 ; i< books ; i++)
        {
            totalreadbystud += pages[i] ; // 20 + 10 + 30 + 40 // mid - > 70 
            if(totalreadbystud > mid)
            {
                currstudent++;
                totalreadbystud = pages[i] ;
            }
        }
        if(currstudent > totalstu) 
            return false;
        else{
            return true ;
        }
        
    }
    int findpages(vector<int>& pages, int books, int totalstud) 
    {
        int start =  *max_element(pages.begin() , pages.end()) ;
        int sum = 0 ;
        for(int i = 0 ; i< books ; i++)
        {
            sum += pages[i];
        }
        int end = sum ;
        int ans = -1; // if no other possibility exist ;
        
        //starting binary Search;
        while(start <= end)
        {
            int mid = start + (end - start) / 2 ;
            if(ispossible(pages , books , totalstud , mid) == true)
            {
                ans = mid ; // we get the temp ans and check in left side ;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            
        }
        return ans ;
    }
    int splitArray(vector<int>& pages, int totalstud) {
        int books = pages.size() ; 
        int x = findpages(pages , books , totalstud);
        return x;
    }
};