class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // find the pos of # 
       string news ="";
        for(auto c : s)
        {
            if(c  != '#')
            {
                news += c;
            }
            else if(!news.empty())
            {
                news.pop_back() ;      
            }
        }
        string newss ="";
        for(auto c : t)
        {
            if(c  != '#')
            {
                newss += c;
            }
            else if(!newss.empty())
            {
                newss.pop_back() ;      
            }
        }
        cout<< newss << " ";
        return (news == newss);
  
    }
};