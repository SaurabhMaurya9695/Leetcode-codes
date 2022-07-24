class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size() ;
        stack<int> openstack , starstack;
        
        for(int i = 0 ; i< n; i++)
        {
            if(s[i] == '(')
            {
                openstack.push(i); // we are pushing index
            }
            else if(s[i] == '*')
            {
                starstack.push(i);
            }
            else if(s[i] ==')') // *())) , )*
            {
                if(openstack.size() > 0) // !openstack.empty();
                {
                    openstack.pop();
                }
                else if(starstack.size() > 0 )
                {
                    starstack.pop();
                }
                else {
                    return false;
                }
            }
        }
        while(!openstack.empty())
        {
            if(starstack.size() == 0 ) return false; 
            else if(openstack.top() < starstack.top())
            {
                openstack.pop();
                starstack.pop();
            }
            else { 
                // openstack.top() > starstack.top()
                return false;
            }
        }
        return true;
    }
};