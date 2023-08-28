class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n= nums2.size();
        int ans1=0,ans2=0;
        for(int i: nums1)
        {
         ans1^=i;
        }
        for(int j:nums2)
        {
            ans2^=j;
        }
        if(m%2==0 && n%2==0) return 0;
        if(m%2 && n%2) return ans1^ans2;
        if(m%2==0 && n%2) return ans1;
        if(m%2 && n%2==0) return ans2;
        return 0;
    }
};