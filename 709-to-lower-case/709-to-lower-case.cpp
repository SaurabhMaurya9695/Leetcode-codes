class Solution {
public:
    string toLowerCase(string str) {
        for (int i=0; i < str.size() ; i++)
        {
            if (isupper(str[i]))
                str[i] = str[i] + 32;
        }
        return str ;
    }
};