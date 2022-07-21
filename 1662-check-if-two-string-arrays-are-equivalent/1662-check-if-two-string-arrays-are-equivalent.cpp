class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& s1, vector<string>& s2) {
        string ans1= "";
        string ans2= "";
        for(auto x: s1)
        {
            ans1 += x;
        }
        for(auto y : s2){
            ans2 += y;
        }
        return (ans2 == ans1);
        
    }
};