class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        int sum=0;
        while(n!=1){
            while(n!=0){
                int r=n%10;
                r=r*r;
                sum+=r;
                n=n/10;
            }
            n=sum;
            sum=0;
            if(mp.find(n)!=mp.end()){
                return false;
            }
            mp[n]=1;
            
        }
        return true;
    }
};