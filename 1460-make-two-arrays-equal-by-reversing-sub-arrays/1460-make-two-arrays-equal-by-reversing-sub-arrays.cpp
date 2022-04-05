class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) 
    {
        unordered_map<int,int> mp;
        for(int x: target)
        {
            mp[x] ++ ;   //1-> 1 , 2->2 , 3->1 
        }
        unordered_map<int,int> mp2 ;
        for(int c : arr)
        {
            mp2[c]++;
        }
        return (mp == mp2);
        
        
    }
};