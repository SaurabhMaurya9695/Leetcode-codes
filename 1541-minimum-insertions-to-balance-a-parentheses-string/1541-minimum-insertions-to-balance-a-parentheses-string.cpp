class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        int cost=0, open=0;
        
        for(int i=0;i<n;i++){
            // opening: just increment the open variable
            if(s[i] == '(')
                open++;
            else{
                                
                if(open > 0){ // there is exist any opening bracket before;
                    open--;              
                }else{          // )))				
                    cost++;
                }
                // also, need to check if the next character is ), since both closings have to be consecutive
                // if yes, congratulations. otherwise we need to insert a closing ')' So add a cost for that.
                if(i == n-1 or s[i+1] != ')') cost++;   // ()) 
                else i++;   // ()(
            }
        }
        // now for all the unsatisfied open '(', we need to create 2 closings ')'. hence add 2*open to res
        cost += 2*(open); // 2 closings for each open '('
        return cost;
    }
};