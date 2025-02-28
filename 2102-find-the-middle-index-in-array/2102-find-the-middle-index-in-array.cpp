class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n= nums.size();
        int left=0, totalSum=0;
         for (int num : nums) {
        totalSum += num;
    }
        for(int i=0;i<n;i++)
        {
            if(left==totalSum-left-nums[i])
            {
                return i;
            }
            left+=nums[i];
        }
        return -1;
        
    }
};