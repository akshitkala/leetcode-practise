class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        int ans=0;
        for(int i:nums){
            int x=1;
            int l=i-1,r=i+1;
            while(mp.find(r)!=mp.end()){
                mp.erase(r++);
                x++;
            }
            while(mp.find(l)!=mp.end()){
                x++;
                mp.erase(l--);
            }
            ans=max(ans,x);
        }
        return ans;
    }
};