class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> map1;
        unordered_map<string,char> map2;
        int i=0;
        for(char c:pattern){
            string temp="";
            if(i>=s.size()) return false;
            while( i<s.size() && s[i]!=' '){
                temp+=s[i++];
                
            }
            if((map1.find(c)==map1.end() || map1[c]==temp) && (map2.find(temp)==map2.end() || map2[temp]==c)){
                map1[c]=temp;
                map2[temp]=c;
            }else{
                
                return false;
            }
            while(i<s.size() && s[i]==' ') i++;
        }
        if(i<s.size()) return false;
        return true;
    }
};