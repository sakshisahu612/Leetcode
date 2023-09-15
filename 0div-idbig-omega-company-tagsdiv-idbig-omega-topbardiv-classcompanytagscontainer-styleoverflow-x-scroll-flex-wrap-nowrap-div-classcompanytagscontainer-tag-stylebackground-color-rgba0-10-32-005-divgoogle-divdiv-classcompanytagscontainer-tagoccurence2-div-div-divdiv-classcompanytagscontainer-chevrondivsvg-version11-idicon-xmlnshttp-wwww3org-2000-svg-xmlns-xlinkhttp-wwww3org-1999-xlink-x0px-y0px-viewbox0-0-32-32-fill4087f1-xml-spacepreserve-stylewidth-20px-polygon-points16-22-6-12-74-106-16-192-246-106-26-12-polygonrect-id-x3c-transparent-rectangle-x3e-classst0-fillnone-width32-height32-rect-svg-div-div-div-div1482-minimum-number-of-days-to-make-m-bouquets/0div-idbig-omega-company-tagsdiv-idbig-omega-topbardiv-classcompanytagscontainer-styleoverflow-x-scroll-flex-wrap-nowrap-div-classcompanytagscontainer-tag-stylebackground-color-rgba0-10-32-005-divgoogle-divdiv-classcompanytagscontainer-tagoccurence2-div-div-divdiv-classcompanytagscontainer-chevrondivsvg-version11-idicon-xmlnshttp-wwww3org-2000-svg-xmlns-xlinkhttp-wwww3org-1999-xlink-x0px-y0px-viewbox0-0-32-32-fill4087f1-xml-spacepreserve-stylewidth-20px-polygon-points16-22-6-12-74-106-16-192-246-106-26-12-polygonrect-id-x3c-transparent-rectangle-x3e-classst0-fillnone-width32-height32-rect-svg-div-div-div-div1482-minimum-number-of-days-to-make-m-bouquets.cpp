class Solution {
public:

    bool rose(vector<int>& bloomDay, int m, int k, int day){
        int bouq = 0;
        int count = 0;
        for(int i = 0; i<bloomDay.size(); i++){
            if(bloomDay[i]<=day){
                count++;
            }
            else{
                bouq += count/k;
                count = 0;
            }
        }
        bouq+=count/k;
        return bouq>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((1ll*m*1ll*k)>(1ll*bloomDay.size())){
            return -1;
        }
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i = 0; i<bloomDay.size(); i++){
            mini = min(mini,bloomDay[i]);
            maxi = max(maxi,bloomDay[i]);
        }

        int low = mini, high = maxi;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(rose(bloomDay,m,k,mid)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};