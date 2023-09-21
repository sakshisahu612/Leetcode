class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int doctor = n/2;
        
        set<int> sett;
        for(auto it : candyType){
            sett.insert(it);
        }
        
        int ans = sett.size();
        
        return min(ans,doctor);
        
    }
};