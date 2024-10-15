class Solution {
public:
    int rob(vector<int>& nums) {
         int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];
    if(n==2) return max(nums[0],nums[1]);

    int dp[n];
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
   int max1=0;

    for (int i = 2; i < n; i++) {
        dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
    }

    max1= dp[n - 2];



    int dp1[n];
    dp1[1] = nums[1];
    
    dp1[2]=max(dp1[1],nums[2]);
  int max2=0;

    for (int i = 3; i < n; i++) {
        dp1[i] = max(nums[i] + dp1[i - 2], dp1[i - 1]);
    }

   max2= dp1[n - 1];

    return max(max1,max2);
        
    }
};