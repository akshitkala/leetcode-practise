class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0;
        int count=0;
        for(int i:nums){
            sum+=i;
            int req=sum-k;
            if(mp.find(req)!=mp.end()){
                count+=mp[req];
            }
                mp[sum]++;
            
            
        }
        return count;
    }
};