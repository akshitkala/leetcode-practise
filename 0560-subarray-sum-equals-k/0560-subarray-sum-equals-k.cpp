class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0,count=0;
        for(int i:nums){
            sum+=i;
            int key=sum-k;
            if(mp.find(key)!=mp.end()){
                count+=mp[key];
            }
            mp[sum]++;
        }
        return count;
    }
};