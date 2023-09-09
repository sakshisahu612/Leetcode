class Solution {
public:
    bool search(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0, high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==k){
                return true;
            }
            else if(arr[mid] == arr[low] && arr[mid] == arr[high]){
                low++;
                high--;
                continue;
            }
            else if(arr[mid]<=arr[high]){
                if(k>=arr[mid] && k<=arr[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
            else{
                if(k>=arr[low] && k<=arr[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
        }
        return false;
    }
};