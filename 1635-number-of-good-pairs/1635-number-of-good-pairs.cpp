class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt;
        int n = nums.size();
        vector<pair<int,int>> vec;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                   vec.push_back({i,j});
                }
                
            }
        }
      return vec.size();
        
    }
};