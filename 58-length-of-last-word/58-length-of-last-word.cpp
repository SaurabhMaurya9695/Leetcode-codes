class Solution {
public:
    int lengthOfLastWord(string s) {
      // stringstream ss(s);
      //  vector<string> v;
      //   string word;
      //   while (ss >> word) {
      //     v.push_back(word);
      //   } 
      //   return v[v.size() - 1].size() ;
        
        
       int count=0;
        bool flag=false;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' and flag==true){
                return count;
            }
            if(s[i]!=' '){
            flag=true;
            count++;}
            
        }
        return count;
        
    }
};