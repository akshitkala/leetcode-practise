class Solution {
public:
    int mySqrt(int x) {
        if(x==1 || x==0) return x;
        for(int i=2;i<=x/2+1;i++){
            if(x/i<i) return i-1;
        }
        return 0;
    }
};