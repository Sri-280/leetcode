class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        set<int> s;
        for(auto mp:arr){
            m[mp]++;
        }
        for(auto n:m){
            if(s.count(n.second)){
                return false;
            }
            s.insert(n.second);
        }
        return true;
    }
};