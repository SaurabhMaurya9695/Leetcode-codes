//Approach-1 (Using Sliding Window) 52/53 test cases passed
class Solution {
public:
    bool isVowel(const char& ch) {
        return ch=='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int findTheLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int n     = s.length();
        int maxL  = 0;
        int start = 0;
        int end   = 0;
        
        while(end < n) {
            char curr = s[end];
            end++;
            if(isVowel(curr)) mp[curr]++;
            
            unordered_map<char, int> temp(mp); //create a temporary map
            
            //you need to decrease the window size until you get all vowels in even count
            while(temp['a']%2 || temp['e']%2 || temp['i']%2 || temp['o']%2 || temp['u']%2) {
                if(isVowel(s[start]))
                    temp[s[start]]--;
                
                start++; //reduce the window size
                
                if(end-start <= maxL) break; //aage barhne se fayda nahi hai bhai
            }
            
            maxL = max(maxL, end-start);
            start = 0;
        }
        
        return maxL;
    }
};