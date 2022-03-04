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
https://eipn-dev1.fa.us2.oraclecloud.com/fscmUI/faces/FuseWelcome?fnd=%3B%3B%3B%3Bfalse%3B256%3B%3B%3B&_afrLoop=2165961274656713&_afrWindowMode=0&_afrWindowId=13psbd9w5a&_adf.ctrl-state=jy1h3c1ha_166&_afrFS=16&_afrMT=screen&_afrMFW=1366&_afrMFH=625&_afrMFDW=1366&_afrMFDH=768&_afrMFC=8&_afrMFCI=0&_afrMFM=0&_afrMFR=96&_afrMFG=0&_afrMFS=0&_afrMFO=0
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