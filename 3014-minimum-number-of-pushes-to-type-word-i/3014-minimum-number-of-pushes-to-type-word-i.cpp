class Solution {
public:
    int minimumPushes(string s) {
        
        // assign every char to a number bw 2 to 9 
        // xycdefghij
        // {2,x} {3,y} , {4, c} ,{5,d} , {6,e} , {7,f} , {8 ,g} , {9,h} -> here we click one time only so cnt += 9
        // then there is not option left to assign then assign next char to start
        // {2, x,i} {3,y,j} -> here we clicked two times 2 and 3 so cnt += 4;
        
        
        map<int , int > mp ;
        int k = 2;
        int cnt = 0;
        for(int i = 0 ;i < s.size() ; i ++ ){
            
            if(mp[k] >= 1){
                mp[k] ++ ;
                cnt += mp[k];
            }
            else{
                mp[k]++;
                cnt += mp[k] ;
                
            }
            k ++ ;
            if(k > 9){
                k = 2;
            }
        }
        
        return cnt;
    }
};