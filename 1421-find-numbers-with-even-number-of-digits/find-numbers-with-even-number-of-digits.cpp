class Solution {
public:
    int count (int n){
    string str=to_string(n);
    return str.size();
    }

    int findNumbers(vector<int>& nums) {
        int dcount=0;
        int res=0;
        for(auto n:nums){
            dcount=count(n);
            if(dcount%2==0){
                res++;
            }
        }
        return res;
    }
};