class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(auto num:nums){
            if(num==val){
                nums.erase(remove(nums.begin(), nums.end(), num), nums.end());
            }
        }
        return nums.size();
    }
};