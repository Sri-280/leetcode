class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1] && nums[i]!=0){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
                res.push_back(nums[i]);
                i++;
            }else{
                if(nums[i]!=0)
                res.push_back(nums[i]);
            }
        }
        if(nums[nums.size()-1]!=0)
        res.push_back(nums[nums.size()-1]);
        while(res.size()!=nums.size()){
            res.push_back(0);
        }
        return res;

    }
};