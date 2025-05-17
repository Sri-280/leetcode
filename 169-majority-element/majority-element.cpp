class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max=0;
        int val=0;
        map<int,int> mp;
        for(auto m:nums){
            mp[m]++;
        }
        for(auto m:mp){
            if(m.second>max){
                max=m.second;
                val=m.first;
            }
        }
        return val;
    }
};

