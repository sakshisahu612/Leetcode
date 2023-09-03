class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n-1, lb = n;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] >= target){
                lb = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        
        return lb;
    }
};