class Solution {
public:
    string minWindow(string s, string t) {
      int i=0;
      int j=0;
      int mini=INT_MAX;
      unordered_map<char,int>m; //making a map to store count of each character of "t" string
        for(int i=0;i<t.size();i++){
            m[t[i]]++;          //By traversing each element of t, set count of each character 
        }
        
        int count =m.size();
        string ans="";
        while(j<s.size()){
        //Finding element of t in string s and if element is there decrese the element count 
                if(m.find(s[j])!=m.end()){
                m[s[j]]--;        
                if(m[s[j]]==0){
                    count--;
                }
            }
            
//As soon as we get count =0 we are approaching our answer , then we will find here our min substring having string t elements
            while(count==0){
                if(mini>j-i+1){
                    mini=min(mini,j-i+1);
                    ans=s.substr(i,j-i+1);
                }
                if(m.find(s[i])!=m.end()){
                    m[s[i]]++;
                    if(m[s[i]]==1){
                        count++;
                    }
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};