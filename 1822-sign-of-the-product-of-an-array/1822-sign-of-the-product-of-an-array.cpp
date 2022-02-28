class Solution {
public:
    
    int signFunc(int pro)
    {
        if(pro < 0)
            return -1;
        else if(pro > 0)
            return 1;
        else
            return 0 ;
    }
    int arraySign(vector<int>& nums) {
        // pro = 1 ;
        int cntneg = 0 , cntpos = 0;
        for(int i = 0; i< nums.size(); i++)
        {
            if(nums[i] == 0)
                return 0;
                // break;
            else{
                //check cnt of -ive & +ive 
                if(nums[i] < 0)
                    cntneg++;
                
            }
                
        }
        if( cntneg % 2 == 0)
            return 1;
        else{
            return -1;
        }
        
    }
};