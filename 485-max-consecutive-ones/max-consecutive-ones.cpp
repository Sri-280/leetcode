class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int count=0;
        for(auto n:nums){
            if(n==0){
                if(sum<count){
                    sum=count;
                }
                count=0;
            }else
            count++;
        }if (sum < count) sum=count;
        return sum;
    }
};