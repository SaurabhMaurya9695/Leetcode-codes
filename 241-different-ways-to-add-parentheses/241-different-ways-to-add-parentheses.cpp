class Solution {
private:
    int stoi(string s){
        int num = 0;
        for(int i = 0; i < s.size(); i++){
            num = num*10 + (s[i]-'0');
        }
        return num;
    }
public:
    vector<int> diffWaysToCompute(string s) {
        vector<int>ans;
        int n = s.size();
        for(int i = 0; i < n; i++){            
            if(s[i] == '+' || s[i] == '-' || s[i] == '*'){
                vector<int>ans1 = diffWaysToCompute(s.substr(0,i)); // 1
                vector<int>ans2 = diffWaysToCompute(s.substr(i+1)); // 2
                for(int j = 0; j < ans1.size(); j++){ 
                    for(int k = 0; k < ans2.size(); k++){
                        if(s[i] == '+') ans.push_back(ans1[j]+ans2[k]);
                        else if(s[i] == '-') ans.push_back(ans1[j]-ans2[k]);
                        else ans.push_back(ans1[j]*ans2[k]);
                    }
                }
            }
        }
        if(ans.size() == 0) ans.push_back(stoi(s));
        return ans;
    }
};