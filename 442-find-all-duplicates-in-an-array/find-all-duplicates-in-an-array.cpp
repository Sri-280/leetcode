class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>m;
        for(auto n:nums){
            m[n]++;
        }
        nums.clear();
        for(auto num:m){
            if(num.second>1){
                nums.push_back(num.first);
            }
        }
        return nums;
    }
};