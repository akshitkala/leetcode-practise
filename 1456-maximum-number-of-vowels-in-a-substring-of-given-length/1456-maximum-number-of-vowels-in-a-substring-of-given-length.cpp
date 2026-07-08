class Solution {
public: 
int isvowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return 1;
    }
    return 0;
}
    int maxVowels(string s, int k) {
        int mx=0,cx=0;
        for(int i=0;i<k;i++){
            cx+=isvowel(s[i]);
        }
        mx=cx;
        for(int i=k;i<s.size();i++){
            cx-=isvowel(s[i-k]);
            cx+=isvowel(s[i]);
            mx=max(cx,mx);
        }
        return mx;
    }
};