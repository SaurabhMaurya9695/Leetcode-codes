class Solution {
public:
    int nthUglyNumber(int n) 
    {
        if (n == 1)
            return 1;

        // Pointers Pointing to Indices not Values
        int ptr2 = 0, ptr3 = 0, ptr5 = 0;

        vector<int> ugly ;
        ugly.push_back(1); // to add the 1st ugly no at index 0

        for (int i = 1; i < n; i++) {
            int a = ugly[(ptr2)] * 2;
            int b = ugly[(ptr3)] * 3;
            int c = ugly[(ptr5)] * 5;

            int mini = min(a, min(b, c));
            ugly.push_back(mini);

            if (mini == a)
                ptr2++;
            if (mini == b)
                ptr3++;
            if (mini == c)
                ptr5++;
        }

        return ugly[(n - 1)];
        
        
    }
};