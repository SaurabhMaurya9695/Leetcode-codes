class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long zeroSeqLen = 0;
        long long total = 0;
        for (int n : nums) {
            if (n == 0) {
                zeroSeqLen++;
            }
            else {
                total += zeroSeqLen * (zeroSeqLen + 1) / 2;
                zeroSeqLen = 0;
            }
        }
        total += zeroSeqLen * (zeroSeqLen + 1) / 2;
        return total;
    }
};