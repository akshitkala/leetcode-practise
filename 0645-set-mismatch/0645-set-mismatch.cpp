class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> check(nums.size(),0);
        int dup=-1,missed=-1;
        for(int i:nums){
            check[i-1]++;
        }
        
        for(int i=0;i<nums.size();i++){
            
            if(check[i]==0) missed=i+1;
            if(check[i]==2) dup=i+1;
        }
        return {dup,missed};
    }
};