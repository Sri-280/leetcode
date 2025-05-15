class Solution {
public:
    int reverse(int x) {
        long rev=0, a=0;
        if(x<0){
            long xc=(-1L*x);
            while(xc){
                rev=rev*10 + xc%10;;
                xc=xc/10;
            }
            rev=-1*rev;
        }else
        {
            while(x){
                rev=rev*10 + x%10;;
                x=x/10;
            }
        }
        if (rev < INT_MIN || rev > INT_MAX) return 0;
        return rev;
    }
};