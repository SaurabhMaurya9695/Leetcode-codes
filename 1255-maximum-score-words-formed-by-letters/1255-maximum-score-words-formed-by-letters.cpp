class Solution {
public:
    
    int helper(vector<string>& words, int* fmap, vector<int>& score, int idx)
    { 
        // base vcase
        if(idx == words.size()){ // all words checked/consumed
            return 0;
        }        
        
        // now each words has to option (n^2), to contribute in current call or not
        
        // no contribution call
        
        int noContribScore = helper(words, fmap, score, idx+1); // idx+1 to look for other word
        
        string currentWord = words[idx];
        int currentWordScore = 0;
        
        bool can_we_use_currentWord = true; // considering;
        
        for(auto x : currentWord){
            char currentChar = x; 
            
            
            if(fmap[currentChar - 'a'] <= 0){
                // we can not use that word 
                // considering "dog" and "good"
                // frq of 'o' is 2
                // o -> 1 after dog
                // 0 -> 0 after using first 'o' of "good";
                // we can not use "dog" and "good" together
                can_we_use_currentWord = false;
            }
            
            // take current character, reduce its frequency
            // dog -> 1:d -> 0:d, then o, then g
            fmap[currentChar - 'a'] -=1; // 
            currentWordScore += score[currentChar-'a']; // add score of current char, for 'd' 5
            
        }
        
        int contribScore = 0;
        
        if(can_we_use_currentWord == true){ // yes we can use current word
            // add its score   
            contribScore = currentWordScore + helper(words, fmap, score, idx+1);
        }
        
        // backtrack, undo our selections
        
        for(auto x : currentWord){
            fmap[x - 'a']+=1;
        }
        
        return max(contribScore, noContribScore);
    }

    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        int fmap[26] = {0}; // to store frequency of each chars
        
        for(auto x : letters){
            fmap[x-'a']++; // d : 3, g : 1, o : 2, c : 1
        }
        
        return helper(words, fmap, score, 0);
    }
};

static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
