class Solution {
public:
    int countSetBits(int num) {
        int count = 0;
        while(num > 0) {
            count++;
            num = num & (num - 1);    // remove Last set bit
        }
        
        return count;
    }
    
    static bool compare(pair<int, int> a, pair<int, int> b) {
        if(a.first == b.first) {
            return a.second < b.second;
        }
        
        return a.first < b.first;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        
        int n = arr.size();
        vector<pair<int, int>> numBits;
        
        for(int val: arr) {
            int setBits = countSetBits(val);
            numBits.push_back({setBits, val});
        }
        
        sort(numBits.begin(), numBits.end(), compare);
        
        for(int i = 0; i < numBits.size(); i++) {
            int val = numBits[i].second;
            arr[i] = val;
        }
        
        return arr;
    }
};