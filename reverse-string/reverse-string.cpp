class Solution {
private:
    void stringhelp(int i, int j, vector<char> &s){
        if(i>=j){
            return;
        }
        swap(s[i], s[j]);
        stringhelp(i+1, j-1, s);
    }
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0, j = n-1;
        stringhelp(i,j,s);
    }
};