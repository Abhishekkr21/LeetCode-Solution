class Solution {
public:
   vector<vector<int>> fourSum(vector<int>& nums, long long target) {
    set<vector<int>> s;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
           
             long long m = target - nums[i] - nums[j];
             int l = j+1,h=n-1; 
             while(l<h)
             {
                 if(nums[l]+nums[h]>m)
                 h--;
                 else if(nums[l]+nums[h]<m)
                 l++;
                 else
                 {
                     s.insert({nums[i],nums[j],nums[l],nums[h]});
                     l++;
                     h--;
                 }

                }      
                    
                
            
        }
    }
        
    vector<vector<int>>v(s.begin(),s.end());
   

    return v;
}


};