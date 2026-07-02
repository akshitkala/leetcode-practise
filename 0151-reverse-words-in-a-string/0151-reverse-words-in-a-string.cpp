class Solution {
public:
    string reverseWords(string s) {
        string ans="";
       int n=s.size();
        int i=0;
            while(i<n){
                string st="";
                while(i<n && s[i]==' ') i++;
                if(i<n){
                    while(i<n && s[i]!=' '){
                    st+=s[i];
                    i++;
                    } 
                }
                if(!st.empty()){
                ans=" "+ st+ ans;
                }

            }
          if (!ans.empty())
    ans.erase(ans.begin());
            return ans;

    }
};