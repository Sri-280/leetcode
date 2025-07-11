class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        vector<int> n(nums.begin(),nums.end());
        sort(n.begin(),n.end(),[] (int& a,int& b){return a>b;});
        for(int i=0;i<nums.size();i++){
            if(n[0]==nums[i]){
                return i;
            }
        }
        return 0;
    }
};