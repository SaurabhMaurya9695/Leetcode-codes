class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num) ;
        sort(s.begin() , s.end()) ;
        // cout<< s << endl;
        string s1= "" , s2="";
        s1 += s[0];
        s1 += s[3];
        s2 += s[1];
        s2 += s[2];
        // cout<< s1<< " "<< s2<< endl;
        return (stoi(s1) + stoi(s2) ) ;
    }
};