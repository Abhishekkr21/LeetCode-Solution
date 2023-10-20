class Solution {
    int func(int ind,int curr ,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(ind>=nums.size())
        {
         if(curr ==0)
         return 0;
         return INT_MIN;
        }
        if(dp[ind][curr]!=-1)
        return dp[ind][curr];
        int pick = nums[ind]+func(ind+1,(curr+nums[ind])%3,nums,dp);
        int notpick = func(ind+1,curr,nums,dp);
        return dp[ind][curr]=max(pick,notpick);


    }
public:
    int maxSumDivThree(vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>> dp(n,vector<int>(3,-1));
        return func(0,0,nums,dp);
        
    }
};