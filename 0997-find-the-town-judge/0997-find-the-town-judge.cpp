class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> getTrust(n + 1, 0);
        vector<int> giveTrust(n + 1, 0);

        for (const auto& temp : trust) {
          giveTrust[temp[0]]++;
          getTrust[temp[1]]++;
        }

        for (int i = 1; i <= n; i++) {
          if (giveTrust[i] == 0 && getTrust[i] == n - 1) {
            return i;
          }
        }

        return -1;
    }
};