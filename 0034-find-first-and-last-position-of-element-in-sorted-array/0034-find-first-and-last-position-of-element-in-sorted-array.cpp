class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n-1, first = -1, last = -1;
        
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] > target){
                right = mid - 1;
            }
            else if(nums[mid] < target){
                left = mid+1;
            }
            else{
                first = mid;
                right = mid - 1;
            }
        }
        
        left = 0;
        right = n-1;
        
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] > target){
                right = mid - 1;
            }
            else if(nums[mid] < target){
                left = mid+1;
            }
            else{
                last = mid;
                left = mid+1;
            }
        }
        
        return {first,last};
    }
};