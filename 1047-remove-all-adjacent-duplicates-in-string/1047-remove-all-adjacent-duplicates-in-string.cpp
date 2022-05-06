class Solution {
public:
    string removeDuplicates(string s) {
        string ans=""; // take a string
        for(int i=0;i<s.size();i++)
        {
            if(ans.size()) // if there is any of the char present then check
            {
                if(ans[ans.size()-1]==s[i]) // last char in string and the char of s[i]  is equal then we pop() otherwise push ;
                {
                    ans.pop_back();
                }
                else
                {
                    ans.push_back(s[i]);
                }
            }
            else // if string doesn't have any char
            { 
                ans.push_back(s[i]); // push into string ;
            }
        }
        return ans; // return that string ;
    }
};