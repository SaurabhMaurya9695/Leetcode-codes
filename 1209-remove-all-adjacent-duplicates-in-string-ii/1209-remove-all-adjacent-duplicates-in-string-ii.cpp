class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        if(n<k) return s;
        
        stack<pair<char,int>> stack;
        for(int i=0; i<n; ++i)
        {
            if(stack.empty() || stack.top().first != s[i])
            {
                stack.push({s[i],1});  
            } 
            else
            {
                auto prev = stack.top(); // means we got an equal char ;
                stack.pop(); // we pop that char
                stack.push({s[i], prev.second+1}); // increase the cnt 
            }
            if(stack.top().second==k) stack.pop(); // if its cnt  == k then pop ;
        }
        
        string ans = "";
        while(!stack.empty())
        {
            auto cur = stack.top();
            stack.pop();
            while(cur.second--)
            {
                ans.push_back(cur.first);
            }
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};