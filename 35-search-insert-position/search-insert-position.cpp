class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size()-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }else if(target>nums[i] && target<=nums[i+1]){
                return i+1;
            }
        }
        if(target>nums[n]){
            return n+1;
        }
        return 0;
    }
}; 