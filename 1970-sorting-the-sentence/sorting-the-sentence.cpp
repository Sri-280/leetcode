class Solution {
public:
    string sortSentence(string s) {
        string res;
        vector <string> word;
        string temp;

        for(char i:s){
            if(i==' '){
                word.push_back(temp);
                temp="";
            }else{
                temp+=i;
            }
        }
        word.push_back(temp);

        sort(word.begin(),word.end(), [] (string a, string b) {return a.back() < b.back();});

        for(int i=0;i<word.size();i++){
            word[i].pop_back();
            res+=word[i];
            if (i != word.size() - 1) res += " "; 
        }   
        return res;
    }
};