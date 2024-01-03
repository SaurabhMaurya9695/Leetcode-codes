class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        // 3 , 2 * 1 ;
        int last = count(bank[0].begin() , bank[0].end() ,'1');
        int sum = 0 ;
        for(int i = 1; i < bank.size() ; i++){
            int x = count(bank[i].begin() , bank[i].end() ,'1');
            if(x == 0){
                continue;
            }
            else{
                sum += (x * last);
                last = x;
            }
            
        }
        return sum;
    }
};