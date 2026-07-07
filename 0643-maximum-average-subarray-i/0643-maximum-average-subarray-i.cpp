class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double msum=0,csum=INT_MIN;
        for(int i=0;i<k;i++) msum+=nums[i];
        csum=msum;
        for(int i=k;i<nums.size();i++){
            csum=csum+nums[i]-nums[i-k];
            msum=max(csum,msum);
        }
        return msum/k;
        
    }
};