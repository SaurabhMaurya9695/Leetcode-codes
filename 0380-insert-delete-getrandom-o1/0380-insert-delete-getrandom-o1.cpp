#pragma GCC optimize("Ofast","inline","-ffast-math")
#pragma GCC target("avx,mmx,sse2,sse3,sse4")
class RandomizedSet {
public:
    unordered_map<int, int> um; //val, index in vector
    unordered_map<int, int>::iterator it;
    vector<int> v;
    
    RandomizedSet() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    
    bool insert(int val) {
        if(um.count(val)) return false;
        um[val] = v.size();
        v.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        it = um.find(val);
        if(it == um.end()) return false;
        v[it->second] = v.back();
        um[v.back()] = it->second;
        v.pop_back();
        um.erase(it);
        return true;
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

