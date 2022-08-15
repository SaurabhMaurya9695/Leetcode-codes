class Solution {
public:
    // /this vector will stpre the outputs
   vector<string>op;
    
    //this is the code of every number according to the keypad phone
    vector<string>codes{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
     
    void rec(string digits,string ans="")
    {
        //since we will be decreasing digits this will be the base case
        if(digits.length()==0)
        {
            op.push_back(ans);
            return ;
        }
        //get the 0th digit
        char ch=digits[0]; 
        //reduce the digit after extracting the 0th one 
        digits=digits.substr(1); 
        //get the code of the extracted digited
        string code=codes[ch-'0']; 
        //traverse the code and add the code to ans string one by one 
        for(int i=0;i<code.length();i++)
            rec(digits,ans+code[i]); 
    }
    
    vector<string> letterCombinations(string digits) {
        
        //if no digits are given the return empty op vector
        if(digits.length()==0)
            return op;
        
        rec(digits);
        return op;
    }
};