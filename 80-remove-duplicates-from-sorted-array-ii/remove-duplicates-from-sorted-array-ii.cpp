class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        for(auto i:nums){
            if(m[i]<2)
            m[i]++;
        }
        nums.clear();
        for (auto [key, value] : m) {
        for (int i = 0; i < value; i++) {
            nums.push_back(key);
        }
    }
    return nums.size();
    }
};

