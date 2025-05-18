class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int> res;
        int count=0;
        for(auto n:nums){
            if(n%2==0 && n%3==0){
                count+=n;
                res.push_back(n);
            }
        }
        if(res.size()!=0)
        return count/res.size();
        return 0;
    }
};