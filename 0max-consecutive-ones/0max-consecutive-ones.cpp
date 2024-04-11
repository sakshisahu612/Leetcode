class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0, maxi = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                sum += 1;
            }
            else{
                maxi = max(sum, maxi);
                sum = 0;
            }
        }
        maxi = max(sum, maxi);
        return maxi;
    }
};