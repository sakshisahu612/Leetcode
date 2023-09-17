class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        int open = 0, close = 0;
        int start = 0;
        string ans = "";
        for(int i = 0; i<n; i++){
            char c = s[i];
            if(c == '('){
                open++;
            }
            else if(c == ')'){
                close++;
            }
            if(open==close){
                ans += s.substr(start+1 , i-start-1);
                start = i+1;
            }
        }
        return ans;
    }
};