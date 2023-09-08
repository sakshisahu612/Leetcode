class Solution {
public:
    vector<int> getRow(int row) {
        if(row == 0){
            return {1};
        }
        long long ans = 1;
        vector<int> ansRow(row+1,1);
        for(int col = 1; col<row; col++){
            ans = ans*(row-col+1);
            ans = ans/(col);
            ansRow[col] = ans;
        }
        return ansRow;
    }
};