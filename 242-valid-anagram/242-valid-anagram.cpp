class Solution {
public:
    #define sort(a) sort(a.begin() , a.end())
    bool isAnagram(string s, string t) {
        sort(s) ;
        sort(t);
        return (s==t) ;
    }
};
static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();

