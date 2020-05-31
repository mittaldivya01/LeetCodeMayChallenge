class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int x = word1.size(), y= word2.size();
		if (x * y == 0)
			return x + y;
        
        //dp initialize
		vector<vector<int>> dp(x + 1, vector<int>(y + 1, 0));
		for (int i = 0; i <= x; i++) {
			dp[i][0] = i;
		}
		for (int i = 0; i <= y; i++) {
			dp[0][i] = i;
		}

        //dp for i-1'word1 letter for j-1'word2 letter updated with min operation required so far
		for (int i = 1; i <= x; i++) {
			for (int j = 1; j <= y; j++) {
				if (word1[i - 1] == word2[j - 1]) {
					dp[i][j] = dp[i - 1][j - 1];
				} else {
					dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
				}
			}
		}
		return dp[x][y];
    }
};
