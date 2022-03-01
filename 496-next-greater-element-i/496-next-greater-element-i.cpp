class Solution {
public:
    vector<int>  ngr(vector<int>& arr)
    {
        int n = arr.size() ;
        stack<int> s;
        vector<int> arr1(n);

        for (int i = n - 1; i >= 0; i--)
        {		
            while (!s.empty() && s.top() <= arr[i])
                s.pop();

            if (s.empty())
                arr1[i] = -1;		
            else
                arr1[i] = s.top();	

            s.push(arr[i]);
        }
        return arr1;

    }
    vector<int> nextGreaterElement(vector<int>& arr, vector<int>& v) {
        vector<int> ans = ngr(v);
        // return ans;
        vector<int> res;
        map<int,int> mp;
        for(int i = 0 ; i< ans.size() ; i++)
        {
            mp.insert({v[i] , ans[i]});
        }
        for(int i=0;i<arr.size();i++)
        {
            auto e=mp.find(arr[i]);
            if(e!=mp.end())
                res.push_back(e->second);
        }
        return res;
    }
};