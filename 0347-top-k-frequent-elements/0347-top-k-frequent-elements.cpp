class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        vector<vector<int>> v(n+1);
        // unordered_map<int,int> mp2;
        for(int i: nums){
            mp[i]++;
        }
        for(auto[key,value]:mp){

            v[value].push_back(key);
        }
        vector<int> ans;
        for(int i=n;i>=1 && ans.size()<k ;i--){
            for(int j:v[i]){
                ans.push_back(j);
                if(ans.size()>k) break;
            }
        }

        
        return ans;
    }
};