class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cp=0, cn=0;
        for(auto n:nums){
            if(n>0){
                cp++;
            }else if(n<0){
                cn++;
            }
        }
        return max(cp,cn);

    }
};