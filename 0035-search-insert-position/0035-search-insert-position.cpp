class Solution {
public:
    int searchInsert(vector<int>& nums, int tar) {
        int s=0,e=nums.size()-1;
        while(s<=e)
        {
            int m= s+(e-s)/2;
            if(nums[m]==tar)
            return m;
            else if(nums[m]>tar)
            e=m-1;
            else
            s=m+1;

        }
        return s;
 }
        
    
};