class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.size();i++){
            s.insert(0,1,s[s.size()-1]);
            s.pop_back();
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};