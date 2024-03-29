class Solution {
public:
    bool equalFrequency(string word)
    {
        unordered_map<char, int> mp1; // {char,freq}
        map<int, int> mp2;            //{freq_value,number of times this freq occured}
        for (char c : word)
            mp1[c]++;

        for (auto &x : mp1)
            mp2[x.second]++;

        if (mp2.size() > 2) // if we have more than 2 diff freq
            return false;
        map<int, int>::iterator it1 = mp2.begin(); // iterator at 1st freq
        map<int, int>::iterator it2 = mp2.begin();
        it2++; // iterator at 2nd freq

        int f1 = it1->first;  // 1st freq value
        int n1 = it1->second; // number of times 1st freq occured
        int f2 = it2->first;  // 2nd freq value
        int n2 = it2->second; // number of times 2nd freq occured

        if (mp2.size() == 1)
        {
            if (mp1.size() == 1 || f1 == 1)
                return true;
            return false;
        }

        if (f1 == 1 && n1 == 1)
            return true;
        if ((f1 == f2 - 1) && n2 == 1)
            return true;
        return false;
    }
        
};