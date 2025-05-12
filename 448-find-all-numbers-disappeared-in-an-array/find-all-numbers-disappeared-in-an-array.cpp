class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<string> n;
        
        for(int i=0;i<nums.size();i++){
            int in=abs(nums[i])-1;
            nums[in]=-abs(nums[in]);
        }
        vector<int> ans;     
        for(int j=0;j<nums.size();j++){
            if(nums[j]>0){
                ans.push_back(j+1);
                }
            }
        return ans;
    }
};