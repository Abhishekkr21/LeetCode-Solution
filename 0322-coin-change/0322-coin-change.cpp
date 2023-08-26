class Solution {
public:
    int coinChange(vector<int>& co, int am) {
        int n =co.size();
        if(am==0)
        return 0;
        vector<int> dp(am+1,am+1);
        dp[0]=0;
        for(int i=1;i<=am;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i>=co[j])
                {
                    dp[i]=min(dp[i],dp[i-co[j]]+1);
                }
            }
        }
        return dp[am] <= am ? dp[am] : -1;
       
        
    }
};