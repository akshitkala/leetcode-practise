class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c: s){
            mp[c]++;
        }
        vector<pair<char,int>> freq;
        for(auto i:mp){
            freq.push_back({i.first,i.second});
        }
           sort(freq.begin(), freq.end(), [](auto &a, auto &b) {
        return a.second > b.second;
    });
    string ans="";
    for(auto i:freq){
        // cout<<i.first<<" "<<i.second<<"\n";
        for(int j=0;j<i.second;j++){
            ans+=i.first;
        }
        // cout<<ans<<"\n";
    }
    return ans;
    }
};