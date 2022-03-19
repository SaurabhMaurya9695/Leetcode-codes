class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int len = digits.size() - 1;
      
      for (int i = len; i >= 0; --i)
      { 
            if (digits[i] == 9)  
            // while the index is valid and the value at [index] == 9 set it as 0
            {  
              digits[i] = 0;
            } 
          else
          { 
              digits[i] ++;
              return digits;
            }
      }
      // insert an one at the beginning of the vector
      digits.push_back(0);
      digits[0] = 1;
      return digits;
    }
};