class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int lt=0,zeroes=0,ans=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0) zeroes++;
            while(zeroes>k){
                if(nums[lt++]==0) zeroes--;
            }
            ans=max(ans,right-lt+1);
        }
        return ans;
    }
};