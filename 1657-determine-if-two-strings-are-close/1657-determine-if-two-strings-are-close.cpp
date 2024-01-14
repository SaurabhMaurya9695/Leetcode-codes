class Solution {
public:
    
    /*
    word1 = "aabcccdeeeff", word2 = "abbbccddefff"
    Both strings contain the same unique characters {a, b, c, d, e, f}.
    Frequency charts of both strings:
    word1: a->2, b->1, c->3, d->1, e->3, f->2
    word2: a->1, b->3, c->2, d->2, e->1, f->3
    Sorted order of frequency arrays: {1, 1, 2, 2, 3, 3} 
    
    */
    bool closeStrings(string word1, string word2) {
        vector<int>freq(26), freqT(26);
        for(int i = 0; i < word1.size(); i++){
            freq[word1[i]-'a']++;
        }
        for(int i = 0; i < word2.size(); i++){
            freqT[word2[i]-'a']++;
        }
        
        for(int i = 0; i < 26; i++){
            if(freq[i] == 0 && freqT[i] != 0 || freq[i] != 0 && freqT[i] == 0) return false;
        }
        sort(freqT.begin(), freqT.end()); 
        sort(freq.begin(), freq.end());
        
        for(int i = 0; i < 26; i++){
            if(freq[i] != freqT[i]) return false;
        }
        
        return true;
    }
};