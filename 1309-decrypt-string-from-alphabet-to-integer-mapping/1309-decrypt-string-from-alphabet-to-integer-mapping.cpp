class Solution {
public:
    string freqAlphabets(string s) {
        string res="";
        int n=s.size();
        string temp;
        for(int i=0; i<n; i++)
        {
            if(i+2 < n && s[i+2] == '#')
            {
                temp=s[i];
                temp+=s[i+1];
                i=i+2;
            }
            else
                temp=s[i];
            res+=char(96+stoi(temp));
        }
        return res;
    }
};