class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum=0;
        int dsum=0;
        for(auto s:nums){
            esum+=s;
        }
        for(auto n:nums){
            while(n){
                int x=n%10;
                dsum+=x;
                n=n/10;
            }
        }
        return esum-dsum;
    }
};