class Solution {
public:
    int passThePillow(int n, int time) {
        int s=1;
        int d=1;
        for(int i=0;i<time;i++){
                s+=d;
            if(s==n||s==1){
                d*=-1;
            }
        }
        return s;
    }
};