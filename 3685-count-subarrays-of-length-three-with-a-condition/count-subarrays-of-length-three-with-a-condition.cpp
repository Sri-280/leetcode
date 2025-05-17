class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-2;i++){
            int a=(nums[i]+nums[i+2])*2;
            if(nums[i+1]==a){
                count++;
            }
        }
        return count;
    }
};