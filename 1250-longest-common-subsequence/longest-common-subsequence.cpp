class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<int> dp(text1.length(), 0);
        int res = 0;

        for (char c : text2) {
            int len = 0;
            for (int i = 0; i < dp.size(); i++) {
                if (len < dp[i]) {
                    len = dp[i];
                } else if (c == text1[i]) {
                    dp[i] = len + 1;
                    res = max(res, len + 1);
                }
            }
        }

        return res; 
    }
};