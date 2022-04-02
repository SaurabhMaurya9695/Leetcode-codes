class Solution {
public:
    bool restcheck(string s, int first, int last)
    {
        while (first < last)
        {
            if (s[first] != s[last])
                return false;

            ++first;
            --last;
        }

        return true;
    }

    bool validPalindrome(string s)
    {
        int first = 0;
        int last = s.size() - 1;

        while (first < last)
        {
            if (s[first] != s[last])
            {
                if (restcheck(s, first + 1, last))
                    return true;

                else if (restcheck(s, first, last - 1))
                    return true;

                else
                    return false;
            }

            ++first;
            --last;
        }

        return true;
    }
};