class Solution {
    int dp[10010];
    int f(vector<int>&co, int am)
    {
        if(am==0)
        return 0;
        if(dp[am]!=-1)
        return dp[am];
        int ans = INT_MAX;
        for(int coin: co)
        {
            if(am-coin>=0)
            ans = min(ans+0LL, f(co,am-coin)+1LL);

        }
        return dp[am]= ans;
    }
public:
    int coinChange(vector<int>& co, int am) {
        memset(dp,-1,sizeof(dp));
        int ans = f(co,am);
        return ans==INT_MAX ?-1 :ans;
       
       
        
    }
};