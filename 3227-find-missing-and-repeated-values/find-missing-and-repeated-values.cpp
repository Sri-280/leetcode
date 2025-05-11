class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> res;
        vector<int> r;
        
        for (auto v : grid) {
        res.insert(res.end(), v.begin(), v.end());
        }
        sort(res.begin(),res.end());

        for(int i=0;i<res.size()-1;i++){
           if(res[i]==res[i+1]){
                r.push_back(res[i]);
                break;
            }
        }
        int n = grid.size();
        int total = n * n;
        for (int i = 1; i <= total; i++) {
            if(!binary_search(res.begin(), res.end(), i)){
                r.push_back(i); // missing
                break;
           }
        }
        return r;
    }
};