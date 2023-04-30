class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        vector<int> temp;
        set<int> st;
        map<int, bool> m1, m2;
        
        for(int i=0; i<a.size(); i++)   {
            m1[a[i]] = m2[b[i]] = true; // make the both element true in their map
            if(m1.find(b[i]) != m1.end())  st.insert(b[i]);     // if the b[i] is present before in the array a then push it in set
            if(m2.find(a[i]) != m2.end())  st.insert(a[i]);     // if the a[i] is present before in the array b then push it in set
            temp.push_back(st.size());      // set => size indecates the number of element common 
        }
        return temp;
    }
};