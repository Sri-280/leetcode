class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <string,vector<string>> mp;
        vector<vector<string>> res;
        for(auto s:strs){
            string wrd=s;
            sort(wrd.begin(),wrd.end());
            mp[wrd].push_back(s);
        }
        for (auto& pair : mp) {
        vector<string> group = pair.second;
        sort(group.begin(), group.end()); 
        res.push_back(group);
    }
    return res;
    }
};
