class Solution {
public:
    
    int MaxValueIdx(vector<int> arr){
        // cout<<"Cha" << endl;
        int max = 0 ;
        int maxidx = 0;
        for(int i = 0 ; i < arr.size() ; i ++){
            if(arr[i] > max){
                maxidx = i ;
                max = arr[i] ;
            }
        }
        return maxidx ;
    }
    
    vector<int> findPeakGrid(vector<vector<int>>& arr) {
        int row = arr.size() ;
        int col = arr[0].size() ;
        int start = 0 , end = row - 1;
        while(start <= end){
            int middlerow = (start + end) / 2; 
            //first we have to find maxValueIndex of in middleRow
            int rowMaxidx =  MaxValueIdx(arr[middlerow] ) ;
            
            // our middle row is top row then our upper row doesn't exist 
            if(middlerow == 0){
                if(arr[middlerow][rowMaxidx] > arr[middlerow + 1][rowMaxidx]){
                    return {middlerow , rowMaxidx};
                }
            }
            
            //our middle row is top row then our uplower  row doesn't exist
            if(middlerow == row - 1){
                if(arr[middlerow][rowMaxidx] > arr[middlerow - 1][rowMaxidx]){
                    return {middlerow , rowMaxidx};
                }
            }
            
            //checking the max element whether  the elem is gret then its side 
            if(
                arr[middlerow][rowMaxidx] > arr[middlerow + 1][rowMaxidx]  && 
                (arr[middlerow][rowMaxidx] > arr[middlerow - 1][rowMaxidx])
            ){
                    return {middlerow , rowMaxidx} ;
                
            }
            
            //where we have to go now ? -> up or dowm 
            if(arr[middlerow][rowMaxidx]  < arr[middlerow + 1][rowMaxidx] ){
                // we have to go in 
                start = middlerow + 1;
            }
            else{
                end = middlerow - 1;
            }
            
            
        }
        // cout << MaxValueIdx(arr[1]) << endl ;
        return {-1,-1} ;
    }
};











