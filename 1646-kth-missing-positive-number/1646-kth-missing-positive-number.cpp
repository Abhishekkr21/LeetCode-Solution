class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int m = k* arr.size()+2;
        set<int> s(arr.begin(),arr.end());
        vector<int> v;
        for(int i=1;i<=m;i++)
        {
                if(s.find(i)==s.end())
                {v.push_back(i);}
                if(v.size()>=k)
                break;
        }
        return v[k-1];

    }
};