class Solution {
public:
     // for comparing the pair second index:
  static bool comp(pair<int,int>&a , pair<int,int>&b)
    {
        if(a.first==b.first)
        {
            return a.second>b.second;
        }
        return a.first<b.first;
    }
vector<int> frequencySort(vector<int>& nums)
{
    unordered_map<int,int>mp;
    for(auto i:nums)
      mp[i]++; // store frequncy ;
	  
	  
	  // for sorting the array based on their frequency:  
    vector<pair<int,int>>ans;
    for(auto i:mp)
    {
        ans.push_back({i.second,i.first});
    }
    cout<<"after\n" ;
    for(int i = 0 ; i< ans.size() ; i++)
    {
        cout<< ans[i].first << "-> " << ans[i].second<< "\n" ;
    }
    sort(ans.begin(),ans.end(), comp); //comp function for comparision between the pair
    
    
    cout<<"before\n" ;
    for(int i = 0 ; i< ans.size() ; i++)
    {
        cout<< ans[i].first << "-> " << ans[i].second<< "\n" ;
    }
 
    vector<int>res;
    for(int i=0;i<ans.size();i++)
    {
        while(ans[i].first--)
        {
            res.push_back(ans[i].second);
        }
    }
    return res;
}
};

//after
// 1-> 3
// 3-> 2
// 2-> 1
// before
// 1-> 3
// 2-> 1
// 3-> 2
