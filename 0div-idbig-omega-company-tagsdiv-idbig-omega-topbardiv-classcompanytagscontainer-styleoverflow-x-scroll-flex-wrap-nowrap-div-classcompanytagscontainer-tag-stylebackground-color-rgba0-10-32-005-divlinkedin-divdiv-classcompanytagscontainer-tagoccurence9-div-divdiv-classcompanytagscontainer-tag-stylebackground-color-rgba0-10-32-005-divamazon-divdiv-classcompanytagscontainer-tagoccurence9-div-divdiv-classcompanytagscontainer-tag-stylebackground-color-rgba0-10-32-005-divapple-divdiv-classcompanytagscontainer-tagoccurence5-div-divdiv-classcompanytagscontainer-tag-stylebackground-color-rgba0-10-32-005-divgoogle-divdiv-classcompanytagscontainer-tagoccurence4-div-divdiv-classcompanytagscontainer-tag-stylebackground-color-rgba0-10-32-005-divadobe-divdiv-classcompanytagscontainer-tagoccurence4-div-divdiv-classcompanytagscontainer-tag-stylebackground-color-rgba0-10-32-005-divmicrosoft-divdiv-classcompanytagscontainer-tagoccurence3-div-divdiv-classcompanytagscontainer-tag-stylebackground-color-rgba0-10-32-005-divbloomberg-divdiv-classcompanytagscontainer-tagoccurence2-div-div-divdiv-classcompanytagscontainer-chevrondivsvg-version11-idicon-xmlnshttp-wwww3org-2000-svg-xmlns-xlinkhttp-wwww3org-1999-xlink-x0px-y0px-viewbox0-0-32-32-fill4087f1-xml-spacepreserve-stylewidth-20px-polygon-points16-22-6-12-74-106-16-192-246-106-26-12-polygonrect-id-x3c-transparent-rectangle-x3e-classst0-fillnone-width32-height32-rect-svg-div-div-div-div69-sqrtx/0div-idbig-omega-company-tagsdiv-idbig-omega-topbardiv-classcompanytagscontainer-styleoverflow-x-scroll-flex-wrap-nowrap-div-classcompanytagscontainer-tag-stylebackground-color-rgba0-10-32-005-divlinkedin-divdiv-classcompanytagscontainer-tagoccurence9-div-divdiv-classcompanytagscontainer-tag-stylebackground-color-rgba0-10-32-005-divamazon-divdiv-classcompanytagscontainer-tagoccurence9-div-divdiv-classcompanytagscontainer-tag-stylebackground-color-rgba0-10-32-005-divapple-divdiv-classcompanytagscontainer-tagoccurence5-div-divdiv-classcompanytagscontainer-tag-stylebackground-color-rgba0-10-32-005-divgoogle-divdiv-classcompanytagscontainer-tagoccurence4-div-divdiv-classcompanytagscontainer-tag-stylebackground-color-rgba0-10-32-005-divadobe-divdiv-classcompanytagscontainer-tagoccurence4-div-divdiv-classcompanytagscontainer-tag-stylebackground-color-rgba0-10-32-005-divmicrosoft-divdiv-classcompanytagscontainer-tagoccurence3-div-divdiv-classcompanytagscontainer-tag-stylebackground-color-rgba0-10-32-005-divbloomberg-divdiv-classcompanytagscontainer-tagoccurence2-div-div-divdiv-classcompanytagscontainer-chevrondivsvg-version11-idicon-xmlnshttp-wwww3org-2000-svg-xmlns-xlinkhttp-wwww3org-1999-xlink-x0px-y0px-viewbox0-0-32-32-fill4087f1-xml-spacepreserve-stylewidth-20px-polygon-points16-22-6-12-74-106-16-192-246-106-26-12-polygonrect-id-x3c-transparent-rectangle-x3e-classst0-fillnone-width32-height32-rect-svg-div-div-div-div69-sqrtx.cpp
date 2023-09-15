class Solution {
public:
    int mySqrt(int x) {
        if(x<=1){
            return x;
        }
        
        int left = 1, right = x/2;
        int ans;
        while(left<=right){
            int mid = left + (right-left)/2;
            long long sqr = (long long) mid*mid;
            if(sqr>x){
                right = mid-1;   
            }
            else if(sqr<x){
                ans = mid;
                left = mid+1;
            }
            else{
                return mid;
            }
        }
        return ans;
    }
};