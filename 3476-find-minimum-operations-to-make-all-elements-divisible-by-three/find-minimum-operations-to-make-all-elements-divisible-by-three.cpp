class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(auto s:nums){
            if(s%3!=0){
                if(s%3==2){
                    count++;
                }else{
                    count++;
                }
            }
        }
        return count;
    }
};