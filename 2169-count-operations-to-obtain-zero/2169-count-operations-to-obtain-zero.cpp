class Solution {
public:
    int countOperations(int n1, int n2) {
        int cnt = 0;
        if(n1 == n2)
           if(n1 == 0 && n2 == 0) 
              return 0;
            else{
                return 1;
            }
        else{
            while(n1  != 0 && n2 != 0)
            {
                if(n1 > n2)
                {
                    cnt += n1  / n2;
                    n1 = n1 % n2;
                }
                else{
                    cnt += n2 / n1;
                    n2 = n2 % n1;
                }
            }
        }
        return cnt ;
    }
};