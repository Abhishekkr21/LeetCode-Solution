class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       long long sum =1,c=0;
       int n = nums.size();
       vector<int> v(n,0);
       for(int i=0;i<nums.size();i++) {
           if(nums[i]!=0) sum*=nums[i];
           else
           c++;
       }
       if (c == 1) {
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                v[i] = sum;
                break;
            }
        }
    } else if (c == 0) {
        for (int i = 0; i < n; i++) {
            v[i] = sum / nums[i];
        }
    }
    return v;
    }
    
};