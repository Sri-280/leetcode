class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int tapple = 0;
        int count = 0;
        for (auto i : apple) {
            tapple += i;
        }
        sort(capacity.begin(), capacity.end(),
             [](int a, int b) { return a > b; });
        int box = 0;
            for (auto i : capacity) {
                if (box < tapple) {
                    box += i;
                    count++;
                }
            }
        
            return count;
        }
    };