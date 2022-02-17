class Solution {
public:
    int getLucky(string s, int k) {
        int trans,ans;
        string str;
        for(int i=0;i<s.length();i++) {        // Convert s to integer and store in str
            int trans = s[i] - 'a' + 1;
            str += to_string(trans);
        }
        for(int i=0;i<k;i++) {                 // Repeat the transform operation k times
            ans = 0;
            for(int j=0;j<str.length();j++) {  // Sum of all digits
                ans += (str[j] - '0');
            }
            str = to_string(ans);              // Store new ans as string
        }
        return ans;
    }
	// If this helped you, then please do up vote.
};