class Solution {
public:
    #define all(s) (s.begin() , s.end() )
    bool canBeEqual(vector<int>& target, vector<int>& arr) 
    {
        //Method 1 ;
        // unordered_map<int,int> mp;
        // for(int x: target)
        // {
        //     mp[x] ++ ;   //1-> 1 , 2->2 , 3->1 
        // }
        // unordered_map<int,int> mp2 ;
        // for(int c : arr)
        // {
        //     mp2[c]++;
        // }
        // return (mp == mp2);
        
        //Method 2;
        sort(target.begin(), target.end());
        sort(arr.begin() , arr.end()) ;
        return target == arr ;
        
        
    }
};