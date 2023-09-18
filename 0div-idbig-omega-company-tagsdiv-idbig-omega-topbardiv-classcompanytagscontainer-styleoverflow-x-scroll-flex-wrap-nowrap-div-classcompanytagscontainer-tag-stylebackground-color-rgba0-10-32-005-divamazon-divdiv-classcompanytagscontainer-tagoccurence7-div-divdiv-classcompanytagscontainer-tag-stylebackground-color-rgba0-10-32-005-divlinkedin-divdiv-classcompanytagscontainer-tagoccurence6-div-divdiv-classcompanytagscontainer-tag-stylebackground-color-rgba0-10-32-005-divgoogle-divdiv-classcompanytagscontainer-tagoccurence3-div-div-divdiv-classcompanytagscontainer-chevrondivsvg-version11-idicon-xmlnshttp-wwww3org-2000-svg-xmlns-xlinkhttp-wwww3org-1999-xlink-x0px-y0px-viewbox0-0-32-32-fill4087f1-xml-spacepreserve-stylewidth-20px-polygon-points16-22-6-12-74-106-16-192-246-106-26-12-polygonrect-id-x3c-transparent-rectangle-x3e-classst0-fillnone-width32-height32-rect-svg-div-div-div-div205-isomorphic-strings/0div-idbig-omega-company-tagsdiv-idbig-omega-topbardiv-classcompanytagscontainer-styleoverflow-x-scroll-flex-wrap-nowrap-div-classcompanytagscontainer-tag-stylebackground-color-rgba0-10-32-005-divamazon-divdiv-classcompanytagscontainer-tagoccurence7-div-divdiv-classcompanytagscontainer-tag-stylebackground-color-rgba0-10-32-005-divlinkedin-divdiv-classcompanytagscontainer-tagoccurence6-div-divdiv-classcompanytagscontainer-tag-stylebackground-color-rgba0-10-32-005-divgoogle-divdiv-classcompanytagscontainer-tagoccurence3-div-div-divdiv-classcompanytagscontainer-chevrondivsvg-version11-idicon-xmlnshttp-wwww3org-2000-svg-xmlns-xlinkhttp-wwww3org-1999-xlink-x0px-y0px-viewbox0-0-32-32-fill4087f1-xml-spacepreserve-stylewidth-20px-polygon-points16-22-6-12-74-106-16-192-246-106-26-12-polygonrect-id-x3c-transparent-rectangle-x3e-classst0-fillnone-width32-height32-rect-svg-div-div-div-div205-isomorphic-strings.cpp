class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        if(s.length() != t.length()){
            return false;
        }
        
        map<char,char> map1, map2;
        for(int i = 0; i<n; i++){
            if(map1.find(s[i]) != map1.end() ){
                if(map1[s[i]] != t[i]){
                    return false;
                }
            }
            
            else if(map2.find(t[i]) != map2.end()){
                if(map2[t[i]] != s[i]){
                    return false;
                }
            }
            else{
                map1[s[i]] = t[i];
                map2[t[i]] = s[i];
            }
        }
        return true;
    }
};