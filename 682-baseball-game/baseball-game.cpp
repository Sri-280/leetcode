class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int> res;
        for(int i=0;i<op.size();i++){
            if(op[i]=="+"){
                int n=res.size();
                res.push_back(res[n-1]+res[n-2]);
            }
            else if(op[i]=="D"){
                res.push_back(res.back()*2);
            }
            else if(op[i]=="C"){
                res.pop_back();
            }else{
                res.push_back(stoi(op[i]));
            }
        }
        int sum=0;
        for(auto num: res) sum+=num;
        return sum;
    }
};