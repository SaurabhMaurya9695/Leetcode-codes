class Solution {
public:
    int isPrefixOfWord(string sentence, string p) {
        vector<string> temp ;
        string txt ;
        for(auto x : sentence) {
            if(x >= 'a' && x<='z'){
                txt +=x;
            }
            else{
                if(txt.size() > 0){
                    temp.push_back(txt);
                    txt = "";
                }
            }
        }
        
        if(txt.size() > 0){
            temp.push_back(txt);
            txt = "";
        }
        
        for(int i = 0 ;i < temp.size() ;i ++){
            string t = temp[i].substr(0, p.size() ) ;
            if(t == p){
                return i + 1;
            }
        }
        
        return -1 ;
    }
};