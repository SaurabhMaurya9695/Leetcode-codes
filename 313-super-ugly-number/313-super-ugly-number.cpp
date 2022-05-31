class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& p) 
    {
        vector<int> ptr(p.size() ) ; // make a array of ptr initially they are initialize to zero 
        vector<int> ugly ;
        ugly.push_back( 1 ) ; // first ugly no is 1
        for (int i = 1; i < n; i++)  // we want nth , so we have to fill first 
        {
            // Finding the next Smallest Ugly No
            int mini = INT_MAX;
            for (int j = 0; j < p.size() ; j++) // iterate over prime array 
            {
                mini = min(mini , ugly[(ptr[j])] * p[j]);
            }

            ugly.push_back(mini); // take mini as before and push into vector 

            // Updating All Pointers Pointing to Min
            for (int j = 0; j < p.size() ; j++) 
            {
                if (ugly[(ptr[j])] * p[j] == mini)
                {
                    ptr[j]++;
                }
            }
        }
        return ugly[(n - 1)];  // return the ans 
        
    }
};