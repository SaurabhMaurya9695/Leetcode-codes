class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<pair<int, int>> pq;
        for(int i=0; i<boxTypes.size(); i++){
            pq.push({boxTypes[i][1], boxTypes[i][0]}); // on the basis of units
        }
        
        int ans=0;
        while(!pq.empty()){
            if(truckSize<=0) break;
            pair<int, int> pair = pq.top();
            pq.pop();
            if(truckSize - pair.second>=0){
                ans+=(pair.first*pair.second);
                truckSize -= pair.second;
            }
            else{
                ans+=(pair.first*truckSize);
                truckSize = 0;
            }
        }
        return ans;            
    }
};