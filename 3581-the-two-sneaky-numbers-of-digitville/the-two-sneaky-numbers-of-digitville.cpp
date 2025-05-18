class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> m;
        for(auto mp:nums){
            m[mp]++;
        }
        nums.clear();
        for(auto mp:m){
            if(mp.second==2){
                nums.push_back(mp.first);
            }
        }
        return nums;
    }
};