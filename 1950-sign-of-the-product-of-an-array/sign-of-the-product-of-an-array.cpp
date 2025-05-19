class Solution {
public:
    int arraySign(vector<int>& nums) {
        long nsign=0;
        for(auto n:nums){
            if(n==0) return 0;
            if(n<0) nsign++;
        }
        if(nsign%2==0){
            return 1;
        }
        return -1;
    }
};