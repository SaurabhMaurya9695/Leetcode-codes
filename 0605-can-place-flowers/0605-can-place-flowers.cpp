class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int result = 0;
        for(int i = 0; i < flowerbed.size(); i++) {
            if(flowerbed[i] == 1) {
                i++;
                continue;
            }
            int prev = i == 0 ? 0 : flowerbed[i - 1];
            int next = i == flowerbed.size() - 1 ? 0 : flowerbed[i + 1];
            if(prev == 0 && next == 0) {
                result++;
                i++;
            }
        }
        return result >= n;
    }
};