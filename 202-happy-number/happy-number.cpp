class Solution {
public:
    int sos(int x){
        int res=0;
        while(x){
                res=res+(x%10)*(x%10);
                x=x/10;
            }
            return res;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow=sos(slow);
            fast=sos(fast);
            fast=sos(fast);
        }while(slow!=fast);
        if(slow==1) return true;
        return false;
    }
};