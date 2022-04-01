class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.length();
        int flag=0;
        string ans ="";
        for(int i=0;i<n;i+=k){
        string small_string = s.substr(i,k);
        if(flag==1){
        flag=0;
        }
        else{
        reverse(small_string.begin(),small_string.end());
        // ans = ans+ small_string;
        flag=1;
        }
        ans = ans+ small_string;
        }
        return ans;
    }
    };