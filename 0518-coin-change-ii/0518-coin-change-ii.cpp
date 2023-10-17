class Solution {
    int dp[310][5010];
    int f(int ind,int am, vector<int>&coins)
    {
        if(am==0)
        return 1;
        if(ind<0)
        return 0;
        if(dp[ind][am]!=-1)
        return dp[ind][am];
        int ways=0;
        for(int i=0;i<=am;i+=coins[ind])
        {
        ways +=f(ind-1,am-i,coins);
        }
        return dp[ind][am]=ways;
    }
public:
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        int ans = f(coins.size()-1,amount,coins);
        return ans;
        
    }
};