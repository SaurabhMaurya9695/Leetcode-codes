class Solution {
public:
    
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> temp(26,-1);
        
        int n = s.size();
        
        for(int i=0;i<n;++i){
            int t = s[i] - 'a';  //index of character
            if(temp[t] == -1)  //if character is encountered first time 
                temp[t] = i;
            else{
                temp[t] = i - temp[t] - 1; // find difference between characters
            }            
        }
        
        for(int i=0;i<26;++i){                                  
            if(temp[i] != -1 && distance[i] != temp[i]) return false;
        }
        return true;
        
    }
};