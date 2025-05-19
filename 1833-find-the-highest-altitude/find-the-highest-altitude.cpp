class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> res;
        res.push_back(0);
        for(int i=0;i<gain.size();i++){
            int a=res[i]+gain[i];
            res.push_back(a);
        }
        sort(res.begin(),res.end());
        return res[res.size()-1];
    }
};