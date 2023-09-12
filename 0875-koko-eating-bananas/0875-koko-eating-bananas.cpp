class Solution {
public:

    long long func(vector<int> &arr,int mid){
    long long total = 0;
    for(int i = 0; i<arr.size(); i++){
        total += ceil( (double)(arr[i]) / (double)(mid));
    }
    return total;
}
    int minEatingSpeed(vector<int>& v, int h) {
    long long low = 1, high = *(max_element(v.begin(), v.end()));
    int ans = -1;
    while(low<=high){
        long long mid = low + (high-low)/2;
        long long total = func(v,mid);
        if(total<=h){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
    }
};