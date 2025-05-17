class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        int max1=0;
        int maxi=values[0]+0;
        for(int i=1;i<n;i++){
            max1=max(max1, maxi + values[i] - i);
            maxi = max(maxi, values[i] + i);
        }
        return max1;
    }
};


