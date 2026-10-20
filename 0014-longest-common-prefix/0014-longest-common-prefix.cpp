class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0) return "";
        string ans=strs[0];
        for(int i=1;i<n;i++){
            string temp="";
            int j=0,k=0;
            while(j<ans.size() && k<strs[i].size() && ans[j]==strs[i][k]){
                temp+=ans[j];
                j++,k++;
            }
            if(temp=="") return "";
            ans=temp;
        }
        return ans;
    }
};