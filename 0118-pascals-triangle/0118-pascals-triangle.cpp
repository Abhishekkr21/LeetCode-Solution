class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> res;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            vector<int> c(i+1,1);
            for(int j=1;j<i;j++)
            {
                c[j]=v[j-1]+v[j];
            }
            res.push_back(c);
            v=c;
        }
        return res;
        
    }
};