class Solution {
public:
    #define all(x) x.begin() , x.end()
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        // winner -> looser 
        
        unordered_set<int> winner ;
        unordered_map<int,int> looser ;
        for(auto x : matches  ){
            winner.insert(x[0]);
            looser[x[1]] ++ ;
        }
        
        vector<int> allWinners ;
        
        for(auto x : winner){
            if(looser.find(x) == looser.end()){
                allWinners.push_back(x);
            }
        }
        
        vector<int> looserWhoLosseOneMatch ;
        for(auto x : looser){
            if(x.second == 1){
                looserWhoLosseOneMatch.push_back(x.first);
            }
        }
        
        sort(all(allWinners));
        sort(all(looserWhoLosseOneMatch));
        
        return {allWinners , looserWhoLosseOneMatch};
    }
};