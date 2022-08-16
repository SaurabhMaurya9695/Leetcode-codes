class Solution {
public:
    int firstUniqChar(string s) {
        char ch;
        unordered_map<char,int>m;
        for(auto i=0;i<s.length();i++){
            m[s[i]]++;
        }
        
        for(auto i=0;i!=s.length();i++){
            if(m[s[i]]==1){
                return i;
            }
        }
        
        
       return -1;
    }
};