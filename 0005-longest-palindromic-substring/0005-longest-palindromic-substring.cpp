class Solution {
    bool solve(string &s, int i, int j, vector<vector<int>>&dp)
    {
      if(i>=j)
      {
        return true;
      }
      if(dp[i][j]!=-1)
      {
        return dp[i][j];
      }
      if(s[i]==s[j])
      {
        return dp[i][j]=solve(s,i+1,j-1,dp);
      }
      return dp[i][j]=false;
    }
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string temp ="";
        int mL = INT_MIN;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i = 0;i<n;i++)
        {
            for(int j = i;j<n;j++)
            {
                if(solve(s,i,j,dp))
                {
                    if(mL < (j-i+1))
                    {
                        mL = (j-i+1);
                        temp = s.substr(i,mL);
                    }
                }
            }
        }
return temp;


        
    }
};