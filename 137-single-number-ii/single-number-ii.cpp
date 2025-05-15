class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        int res=0;
        for(auto i:nums){
            m[i]++;
        }
        for(auto s:m){
           if( s.second==1){
            res=s.first;
            break;
           }
        }
        return res;
    }
};
