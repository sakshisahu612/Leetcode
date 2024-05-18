class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones = 0, maxx = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                ones++;
            }
            else{
                maxx = max(maxx, ones);
                ones = 0;
            }
        }
        maxx = max(maxx,ones);
        return maxx;
    }
};