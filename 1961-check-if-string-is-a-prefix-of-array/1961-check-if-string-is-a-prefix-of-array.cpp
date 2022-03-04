class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
       string prefix="";
        for(auto x:words){
            prefix+=x;
            if(prefix==s) return true;
        }
        return false;
    }
};