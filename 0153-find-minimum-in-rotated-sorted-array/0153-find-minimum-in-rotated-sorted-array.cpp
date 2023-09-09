class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int next = (mid+1)%n;
            int prev = (mid-1)%n;
            if(arr[low]<=arr[high]){
                return arr[low];
            }
            else if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
                return arr[mid];
            }
            else if(arr[mid]<arr[low]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        return -1;
    }
};