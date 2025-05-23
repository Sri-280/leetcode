class Solution {
public:
    string truncateSentence(string s, int k) {
        string result;
        int count = 0;
        int i;
        for (i = 0; count < k && i < s.size(); i++) {
            if (s[i] == ' ') {
                count++;
            }
            if (count < k)
                result += s[i];
        }
        return result;
    }
};