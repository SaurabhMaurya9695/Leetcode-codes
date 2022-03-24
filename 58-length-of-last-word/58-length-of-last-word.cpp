class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        vector<string> v;
        string word;
        while (ss >> word) {
          v.push_back(word);
        } 
        return v[v.size() - 1].size() ;
    }
};