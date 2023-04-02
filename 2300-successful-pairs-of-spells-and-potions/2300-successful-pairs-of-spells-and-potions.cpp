class Solution {
public:
    #define ll long long 
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success){
        sort(potions.begin(), potions.end());
        vector<int> res;
        for (auto spell: spells) {
            long potion_needed = (success + spell - 1) / spell;
            
            // cout << potion_needed << " " << success + spell - 1 << "/" << spell << endl ;
            auto it = lower_bound(potions.begin(), potions.end(), potion_needed);
            res.push_back(potions.end() - it);
        }
        return res;
    }
};