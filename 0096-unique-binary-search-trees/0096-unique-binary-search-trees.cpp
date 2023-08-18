class Solution {
public:
int f(int n,int dp[])
{
    if(n<=1) return 1;
    if(dp[n]) return dp[n];
    for(int i=1;i<=n;i++)
    {
        dp[n]+=f(i-1,dp)*f(n-i,dp);
    }
    return dp[n];
}
    int numTrees(int n) {
       int dp[20]={0};
       return f(n,dp);
    }
};