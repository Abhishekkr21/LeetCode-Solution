class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        vector<int> arr;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto x: mp)
        v.push_back({x.first,x.second});
       sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });
        for(int i=0;i<k;i++)
        {
            arr.push_back(v[i].first);
        }

        return arr;
    }
};