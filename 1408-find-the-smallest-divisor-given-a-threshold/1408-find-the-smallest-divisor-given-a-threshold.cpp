class Solution {
public:
int  ispossible(vector<int>& nums, int threshold,int mid)
    {
      int sum=0;
        for(int i=0;i<nums.size();i++)
        {
          sum+=(nums[i]+mid-1)/mid;
        }
        return sum;
    }
   
    int smallestDivisor(vector<int>& nums, int threshold) {
  
    
              int l =1, r=*max_element(nums.begin(),nums.end());
        while(l<=r)
        {
         int mid = l+(r-l)/2;
         if(ispossible(nums,threshold,mid)<=threshold)
         {
            r=mid-1;
         }
         else
         {
            l=mid+1;
         }
        }
      return l;
        
    }
};