class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            int a=nums[i]+nums[i+1];
            nums[i+1]=a;
        }
        return nums;
    }
};