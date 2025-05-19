class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto n:nums){
            m[n]++;
        }
        int count=0;
        for(auto n:m){
            if(n.second==1) count+=n.first;
        }
        return count;
    }
};