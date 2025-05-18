class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=INT_MAX;
        int max=0;
        for(auto n:nums){
            if(min>n){
                min=n;
            }
            if(max<n){
                max=n;
            }
        }
        return gcd(min,max);
    }
};