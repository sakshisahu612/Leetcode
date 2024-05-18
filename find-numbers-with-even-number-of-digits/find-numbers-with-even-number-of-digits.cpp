class Solution {
public:
    int count(int a){
        int count = 0;
        while(a != 0){
            a = a/10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int num : nums){
            int c = count(num);
            if(c % 2 == 0){
                ans++;
            }
        }
        return ans;
    }
};