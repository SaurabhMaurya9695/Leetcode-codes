class Solution {
public:
    int largestInteger(int num) 
    {     
        //the idea is to get all even and odd number seaparate
        vector<int> odd;
        vector<int> even;
        
        string n = to_string(num);
        string nn = n;
        
       for(int i = 0;i < n.size();i++)
       {
           int k = n[i] - '0';
            if(k&1)
            {
                odd.push_back(k);
            }
            else
            {
                even.push_back(k);
            }
       }
        
        //lets sort them in decreasing order
        sort(odd.begin(),odd.end() , greater<>());
        sort(even.begin(),even.end() , greater<>()) ;
        for(int x: even) cout<< x << " ";
        //now traverse the original string and put even number where there was even number originally now just in sorted order
        //same for odd numbers and their positions

        int i = 0;
        int j = 0;
        string ans = "";
        for(int m = 0;m < nn.size();m++)
        {
            int k = nn[m]-'0';
            //finding if there was odd or even at this position
            if(k&1)
            {
                ans += odd[i]+'0';
                i++;
            }
            else
            {
                ans += even[j]+'0';
                j++;
            }
        }
       
        return stoi(ans);
        
    }
};