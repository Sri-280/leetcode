class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        std::rotate(nums.begin(),nums.begin() + (n - k),nums.end());
      
    }
};