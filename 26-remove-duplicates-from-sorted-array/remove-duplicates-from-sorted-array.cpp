class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    set<int> s(nums.begin(), nums.end());
    nums.clear();
    for(auto num:s){
        nums.push_back(num);
    }
    return nums.size();
    }
};