class Solution {
public:
    #define all(x) (x).begin(),(x).end()
    #define ll long long
    bool canThreePartsEqualSum(vector<int>& arr) {
        ll sum = accumulate(all(arr),0ll) ;
        if(sum % 3 != 0){
            return false;
        }
        ll cnt = 0;
        ll target = sum / 3;
        ll currSum = 0;
        for(auto x : arr){
            currSum += x;
            if(currSum == target){
                cnt ++;
                cout << cnt << " " << currSum << endl;
                currSum = 0 ;
            }
        }
        return (cnt >= 3) ? true : false; 
    }
};