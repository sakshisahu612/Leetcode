class Solution {
public:
    int sum(vector<int>& mat, int n){
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum+=mat[i];
        }
        return sum;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int maxone = 0;
        int ans_index = 0;
        for(int i = 0; i<m; i++){
            int s = sum(mat[i],n);
            if(s>maxone){
                maxone = s;
                ans_index = i;
            }
            else if(s==maxone){
                ans_index = min(ans_index,i);
            }
        }
        return {ans_index,maxone};
    }
};