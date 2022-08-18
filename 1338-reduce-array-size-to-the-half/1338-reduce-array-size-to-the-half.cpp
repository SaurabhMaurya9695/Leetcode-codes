class Solution {
public:
    int minSetSize(vector<int>& arr) {
       unordered_map<int,int> mp;
        priority_queue<int> pq;
    
    
        int count =0 ; 
        int res=0;

        for(int i=0  ;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto c : mp)
        {
            pq.push(c.second);
        }

        while(count<arr.size()/2)
        {
            count += pq.top();
            pq.pop();

            res++;
        }
    
     return res;
    }
    
};