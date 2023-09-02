class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> temp = heights;
        for(int i = 0; i<n-1; i++){
            for(int j = 0; j<n-i-1; j++){
                if(heights[j]>heights[j+1]){
                    swap(heights[j],heights[j+1]);
                }
            }
        }
        
        int count = 0;
        for(int a = 0; a<n; a++){
            if(heights[a] != temp[a]){
                count++;
            }
        }
        
        return count;
    }
};