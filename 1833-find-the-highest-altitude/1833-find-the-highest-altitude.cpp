class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> dp(gain.size()+1,0);
        for(int i=0;i<gain.size();i++)
        {
            dp[i+1] = dp[i]+gain[i];
        }
        return *max_element(dp.begin(),dp.end());
        
    }
};