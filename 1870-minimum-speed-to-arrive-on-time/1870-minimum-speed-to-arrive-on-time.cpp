class Solution {
public:

    double limit;

    bool check(int k , vector<int>&ar)
    {
        double t=0;
        for(double distance : ar)
        {
            t=ceil(t);
            t+=distance/k;
        }
        return t<=limit;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        
        if(dist.size() > ceil(hour))
        return -1;

        limit=hour;
        int left = 1;
        int right = pow(10,7);

        while(left<=right)
        {
            int mid = left + (right-left)/2;
            if(check(mid,dist))
            right = mid-1;
            else
            left = mid+1;
        }
        return left;
    }
};