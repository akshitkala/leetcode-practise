class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,window=0,ans=0;
        for(int right=0;right<nums.size();right++){
            window+=nums[right];
            while(window<right-left-k+1){
                window-=nums[left++];
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};