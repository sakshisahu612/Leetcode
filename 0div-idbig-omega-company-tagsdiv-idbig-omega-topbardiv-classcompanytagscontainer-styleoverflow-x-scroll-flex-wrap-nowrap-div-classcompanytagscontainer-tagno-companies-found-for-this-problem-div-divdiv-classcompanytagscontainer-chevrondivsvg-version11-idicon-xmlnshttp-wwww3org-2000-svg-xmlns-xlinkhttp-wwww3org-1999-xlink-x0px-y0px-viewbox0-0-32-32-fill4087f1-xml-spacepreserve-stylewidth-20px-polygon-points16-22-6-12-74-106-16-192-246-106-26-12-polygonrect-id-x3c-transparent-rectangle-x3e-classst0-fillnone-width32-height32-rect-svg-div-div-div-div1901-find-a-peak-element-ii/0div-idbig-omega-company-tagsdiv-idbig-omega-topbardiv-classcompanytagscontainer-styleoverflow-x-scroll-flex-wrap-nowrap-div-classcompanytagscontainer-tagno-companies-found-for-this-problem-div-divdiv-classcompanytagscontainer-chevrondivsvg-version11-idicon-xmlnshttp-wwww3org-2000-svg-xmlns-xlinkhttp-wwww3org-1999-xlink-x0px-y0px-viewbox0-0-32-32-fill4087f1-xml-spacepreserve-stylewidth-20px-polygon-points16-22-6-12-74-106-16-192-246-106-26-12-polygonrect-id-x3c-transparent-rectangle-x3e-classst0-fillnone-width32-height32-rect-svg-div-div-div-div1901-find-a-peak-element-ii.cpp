class Solution {
public:
    int maxIndex(vector<vector<int>>& g, int m , int n, int mid){
        int maxi = -1;
        int maxRow = -1;
        for(int i = 0; i<m; i++){
            if(g[i][mid]>maxi){
                maxi = g[i][mid];
                maxRow = i;
            }
        }
        return maxRow;
    }
    vector<int> findPeakGrid(vector<vector<int>>& g) {
        int m = g.size();
        int n = g[0].size();
        int low = 0, high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int row = maxIndex(g,m,n,mid);
            int left = mid-1 > 0 ? g[row][mid-1] : -1;
            int right = mid+1 < n ? g[row][mid+1] : -1;
            if(g[row][mid]>left && g[row][mid]>right){
                return {row,mid};
            }
            else if(g[row][mid]<left){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return {-1,-1};
    }
};