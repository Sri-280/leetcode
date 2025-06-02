class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0, n=s.size()-1;
        while(s[n]==' '){
            n--;
        } 
        for(int i=n;i>=0;i--){
            if(s[i]!=' '){
                length++;
            }else{
                break;
            }
        }
        return length;
    }
};


